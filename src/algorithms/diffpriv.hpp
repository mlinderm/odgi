#pragma once

#include <handlegraph/path_handle_graph.hpp>
#include <handlegraph/util.hpp>
#include <vector>
#include <set>
#include <deque>
#include <random>
#include <iostream>
#include <map>
#include "hash_map.hpp"

namespace odgi {
namespace algorithms {

using namespace handlegraph;

void diff_priv(
    const PathHandleGraph& graph,
    PathHandleGraph& priv,
    double epsilon,
    double target_coverage,
    uint64_t bp_limit = 0);

}
}
