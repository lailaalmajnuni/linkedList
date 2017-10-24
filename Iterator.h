#pragma once

#include "Link.h"

class Iterator {
public:
    void operator++();
    int & operator* () const;
    bool operator==(const Iterator & rhs); //rhs=right handside.


private:
    Iterator(Link * link) : link(link){}
    Link * link;
    friend class list;
    friend class link;
};
