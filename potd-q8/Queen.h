#pragma once
#include "Piece.h"
#include <string>
using namespace std;

class Queen : public Piece{
    public:
        Queen();
        string getType();
};
