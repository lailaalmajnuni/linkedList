#include <iostream>
#include <cassert>
#include “List.h”

Using namespace std;

void test0(){
    	List list;
    	assert(list.empty()==true);
    	assert(list.size()==0);
    	Iterator it = list.begin();
    	Iterator end = list.end();
    	assert(it == end);
    	//or assert(it.operator==(end)); two lines are identical.
}

void pushback1(){
    	List list;
    	list.push_back(17);
    	assert(list.empty()==false);
    	assert(list.size()==1);
    	Iterator it = list.begin();
    	assert(*it == 17);
    	*it = 4;
    	assert(*it ==4);
    	++it;
    	assert(it == list.end)
    	list.pop_back();
    	assert(list.size()==0);
    	it = list.begin();
    	assert(it == list.end)
}

void pushfront1(){
    	List list;
    	list.push_front(17);
    	assert(list.empty()==false);
    	assert(list.size()==1);
    	Iterator it = list.begin();
    	assert(*it == 17);
    	*it = 4;
    	assert(*it ==4);
    	++it;
    	assert(it == list.end)
}

void pushback3(){
    	List list;
    	list.push_back(3);
    	list.push_back(2);
    	list.push_back(6);
    	assert(list.size()==3);
    	iterator it = list.begin();
    	assert(*it ==3);
    	++it;
    	assert(*it ==2);
    	++it;
    	assert(*it ==6);
    	++it;
    	assert(it == list.end)
}

void pushfront3(){
    	List list;
    	list.push_front(3);
    	list.push_front(2);
    	list.push_front(6);
    	assert(list.size()==3);
    	iterator it = list.begin();
    	assert(*it ==6);
    	++it;
    	assert(*it ==2);
    	++it;
    	assert(*it ==3);
    	++it;
    	assert(it == list.end())
    	list.pop_back();
    	assert(list.size()==2);
}

int main() {
	test0();
/*
	pushback1();
	pushfront1();
	pushback3();
	pushfront3()
*/	
    	cout<< "all test passed" <<endl;
    	return 0;
}
