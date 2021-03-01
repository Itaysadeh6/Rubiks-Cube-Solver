#pragma once

#include "../Cube.h"

// speeds searches by pruning redundant moves from a search tree
struct MovesSimplifier
{
    using EMOVE = Rubiks::EMOVE;

    // retruns whether a move should be considered based on the last move
    bool isRedundant(EMOVE curr, EMOVE last) const;
};
