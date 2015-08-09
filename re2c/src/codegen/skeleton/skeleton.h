#ifndef _RE2C_CODEGEN_SKELETON_SKELETON_
#define _RE2C_CODEGEN_SKELETON_SKELETON_

#include <map>

#include "src/codegen/skeleton/path.h"
#include "src/ir/dfa/dfa.h"
#include "src/util/c99_stdint.h"
#include "src/util/forbid_copy.h"
#include "src/util/local_increment.h"
#include "src/util/u32lim.h"
#include "src/util/wrap_iterator.h"

namespace re2c
{

namespace skeleton
{

static const uint32_t ARC_LIMIT = 1024 * 1024 * 1024; // ~1Gb
typedef u32lim_t<ARC_LIMIT> arccount_t;

struct Node
{
	typedef std::map<const State *, Node *> s2n_map;
	typedef std::map<Node *, std::vector<uint32_t> > arcs_t;
	typedef local_increment_t<uint8_t> local_inc;
	typedef wrap_iterator_t<arcs_t> wrap_iter;

	// outgoing arcs
	arcs_t arcs;

	// how many times this node has been visited
	// (controls looping in graph traversals)
	uint8_t loop;

	// rule number for corresponding DFA state (if any)
	rule_rank_t rule;

	// stuff for constructing path cover (for large graphs)
	bool path_len_init;
	arccount_t path_len;
	Path * path;

	Node (const State * s, const s2n_map & s2n);
	~Node ();
	bool end () const;
	arccount_t estimate_size_all (arccount_t inarcs, arccount_t len);
	arccount_t estimate_size_cover (arccount_t inarcs, arccount_t len);
	void generate_paths_all (const std::vector<Path> & prefixes, std::vector<Path> & results);
	void generate_paths_cover (const std::vector<Path> & prefixes, std::vector<Path> & results);

	FORBID_COPY (Node);
};

struct Skeleton
{
	Node * nodes;

	Skeleton (const DFA & dfa);
	~Skeleton ();
	void generate_paths (std::vector<Path> & results);
	void emit_data (DataFile & o);

	FORBID_COPY (Skeleton);
};

void emit_prolog (OutputFile & o, uint32_t ind, const char * data_name);
void emit_epilog (OutputFile & o, uint32_t ind);

} // namespace skeleton

} // namespace re2c

#endif // _RE2C_CODEGEN_SKELETON_SKELETON_