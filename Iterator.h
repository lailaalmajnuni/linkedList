#pragma once

#include "Link.h"

class Iterator {
public:
    Iterator(Link * link) : link(link) {}
	void operator++();
    int & operator* ();
    bool operator==(const Iterator & rhs); //rhs=right handside.


private:
    Link * link;
    
    friend class List;
};
