#pragma once

#include <any>
#include <fstream>
#include <vector>

#include <cmath>
#include <limits>

#include "util/types.h"

#ifndef DOUBLE_INF
static constexpr double DOUBLE_INF = std::numeric_limits<double>::infinity();
static constexpr double DOUBLE_NINF = -std::numeric_limits<double>::infinity();
#endif

class Reader
{
public:
    Reader(std::ifstream &);
    std::any parse();

private:
    std::ifstream *file;

    std::vector<std::any>        object_cache;
    std::vector<std::vector<u8>> symbol_cache;
};
