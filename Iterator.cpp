#include "Iterator.h"
#include <cassert>
#include <iostream>

bool Iterator::operator==(const Iterator & rhs){
    return link == rhs.link;
}

int & Iterator::operator* () {
    assert(link != nullptr);
    return link->value;
}

void Iterator::operator++(){
    assert(link != nullptr);
    link = link->next;
}
