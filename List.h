#pragma once
#include "Iterator.h"

class List{
public:
    List();
    ~List() {}
    bool empty()const;
    int size () const;
    void push_back(int x);
    void push_front(int x);
    void pop_back ();
    void pop_front ();
    Iterator begin();
    Iterator end();
    void insert (Iterator it, int value); 
    void erase ( Iterator it);
private:
    Link * head;
    friend class Iterator;
};
