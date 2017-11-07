#include "List.h"
#include "Iterator.h"
#include <cassert>
#include <iostream>



void emptyTest() {
	List l;
	assert(l.empty()==true);
	assert(l.size()==0);
	Iterator it = l.begin();
	Iterator end = l.end();
	assert(it == end);
	assert(it.operator==(end));
	//or assert(it.operator==(end)); two lines are identical.
}

void pushBack1() {
	List l;
	l.push_back(2);
	assert(l.empty()==false);
	assert(l.size()==1);
	Iterator it = l.begin();
	assert(*it == 2);
	*it = 4;
	assert(*it ==4);
	++it;
	assert(it == l.end());
}

void pushBack3(){
	List l;
	l.push_back(2);
	assert(l.size()==1);
	l.push_back(4);
	assert(l.size()==2);
	l.push_back(6);
	assert(l.empty()==false);
	assert(l.size()==3);
	Iterator it = l.begin();
	assert(*it == 2);
	++it;
	assert(*it == 4);
	++it;
	assert(*it == 6);
	++it;
	assert(it == l.end());
}

void pushFront3(){
	List l;
	l.push_front(2);
	assert(l.size()==1);
	l.push_front(4);
	assert(l.size()==2);
	l.push_front(6);
	assert(l.empty()==false);
	assert(l.size()==3);
	Iterator it = l.begin();
	assert(*it == 6);
	++it;
	assert(*it == 4);
	++it;
	assert(*it == 2);
	++it;
	assert(it == l.end());
}

void popBack1(){
	List l;
	l.push_back(2);
	assert(l.empty()==false);
	assert(l.size()==1);
	l.pop_back();
	assert(l.empty()==true);
	assert(l.size()==0);
	Iterator it = l.begin();
	Iterator end = l.end();
	assert(it == end);
	assert(it.operator==(end));
}

void popBack3(){
	List l;
	l.push_back(2);
	l.push_back(4);
	l.push_back(6);
	l.push_back(8);
	l.push_back(10);
	assert(l.empty()==false);
	assert(l.size()==5);
	Iterator it = l.begin();
	assert(*it == 2);
	l.pop_back();
	assert(*it == 2);
	++it;
	assert(*it == 4);
	++it;
	assert(*it == 6);
	++it;
	assert(*it == 8);
	++it;
	assert(it == l.end());
	it = l.begin();
	assert(*it == 2);
	l.pop_back();
	++it;
	assert(*it == 4);
	++it;
	assert(*it == 6);
	++it;
	assert(it == l.end());
	it = l.begin();
	assert(*it == 2);
	l.pop_back();
	++it;
	assert(*it == 4);
	++it;
	assert(it == l.end());
}

void popFront1(){
	List l;
	l.push_back(2);
	l.push_back(4);
	l.push_back(6);
	assert(l.empty()==false);
	assert(l.size()==3);
	Iterator it = l.begin();
	assert(*it == 2);
	l.pop_front();
	it = l.begin();
	assert(*it == 4);
	++it;
	assert(*it == 6);
	++it;
	assert(it == l.end());
}

void popFront3(){
	List l;
	l.push_back(2);
	l.push_back(4);
	l.push_back(6);
	l.push_back(8);
	l.push_back(10);
	assert(l.empty()==false);
	assert(l.size()==5);
	Iterator it = l.begin();
	assert(*it == 2);
	l.pop_front();
	it = l.begin();
	assert(*it == 4);
	++it;
	assert(*it == 6);
	++it;
	assert(*it == 8);
	++it;
	assert(*it == 10);
	++it;
	assert(it == l.end());
	it = l.begin();
	assert(*it == 4);
	l.pop_front();
	it = l.begin();
	assert(*it == 6);
	++it;
	assert(*it == 8);
	++it;
	assert(*it == 10);
	++it;
	assert(it == l.end());
	it = l.begin();
	assert(*it == 6);
	l.pop_front();
	it = l.begin();
	assert(*it == 8);
	++it;
	assert(*it == 10);
	++it;
	assert(it == l.end());
}

void insertTest(){
	List l;
	l.push_back(2);
	l.push_back(6);
	l.push_back(10);
	assert(l.empty()==false);
	assert(l.size()==3);
	Iterator it = l.begin();
	++it;
	assert(*it == 6);
	l.insert(it, 4);
	it = l.begin();
	assert(*it == 2);
	++it;
	assert(*it == 4);
	++it;
	assert(*it == 6);
	++it;
	assert(*it == 10);
	l.insert(it, 8);
	it = l.begin();
	assert(*it == 2);
	++it;
	assert(*it == 4);
	++it;
	assert(*it == 6);
	++it;
	assert(*it == 8);
	++it;
	assert(*it == 10);
	++it;
	assert(it == l.end());
}

int main(){
	emptyTest();
	pushBack1();
	pushBack3();
	pushFront3();
	popBack1();
	popBack3();
	popFront1();
	popFront3();
	insertTest();
	
	std::cout << "your test passed" << std::endl;

}
