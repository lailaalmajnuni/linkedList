#pragma once

class Link{
public:
    Link(int value, Link * next = nullptr, Link * prev = nullptr) 
    : value(value), next(next){} 

private:
    Link * next;
    Link * prev;
	int value;
	
    friend class Iterator;
    friend class List;
};
