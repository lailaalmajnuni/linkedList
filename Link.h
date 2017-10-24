#pragma once

class Link {
public:
  Link(int n           ){
    int data;
      next=nullptr;
    }

private:
    Link * next;
    int data;
    friend class Iterator;
    friend class List;
};
