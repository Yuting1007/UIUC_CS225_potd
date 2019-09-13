#include "Queen.h"
// implementation of class queen
#include "Piece.h"
#include <string>
using namespace std;

Queen :: Queen(){
    type_ = "Queen";
};

string Queen :: getType(){
    return "Queen";
}
