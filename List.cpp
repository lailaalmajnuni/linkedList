#include <iostream>
#include <cassert>

#include "List.h"

using namespace std;

List::List():head(nullptr), tail(nullptr){}

List::~List(){

}

bool List::empty() const{
    	return head == nullptr;
}

int List::size () const{
    	int countLink = 0;
   	Link * temp =  head;
    	while(temp !=nullptr){
        	++countLink;
       		temp = temp ->next;
    	}
   	return countLink;
}	

void List::push_back(int x){
    	Link* temp = new Link(nullptr, x);
    	if (head = nullptr){
       		head = new_link;
    	}
    	else {
        	int * temp = head;
        	while ( temp-> next != nullptr){
            		temp = temp-> next;
        }
        temp->next = new_link;
}

void List::push_front(const int & x){
    	Link* temp = new link(nullptr, x);
	temp->next = nullptr;
	if(head == nullptr) {
		head = temp;
	}
	else {
		temp->next=head;
		head = temp;
	}
    
}

void List::pop_back (){
    	assert(head !=nullptr);
    	if (head->next == nullptr){
        //special case; only one link
        	head = nullptr
        	return;
    	}

    	Link * temp = head;
    	while(temp->next->next !=nullptr) {
        	temp = temp ->next;
    	}
    	delete temp->next;
    	temp->next = nullptr
}
// right
Iterator List::begin(){
    	return Iterator(head);
}
// right
Iterator List::end(){
    	return Iterator(nullptr);
}
// right


void List::insert (int value){
    	if (link == nullptr) {
        	link = new Link(nullptr, value);
	}
        return;
} 
Iterator List::erase(Iterator it){

}
