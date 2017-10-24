#include "Iterator.h"

Iterator::~Iterator() {
    //hjhkhn
}

bool Iterator::operator==(const Iterator & rhs){
    return link == rhs.link;
}
//right
int & Iterator::operator* () const {
    return link ->value;
}
// right
void Iterator::operator++(){
    link = link ->next;
}
// right
