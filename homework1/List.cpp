#include"List.h"
using namespace std;
bool List::InitList(List &l){
	if(head!=NULL)return false;
	l.now = new Node();
	l.head = now;
	l.last = now;
	length = 1;
	return true;
}
bool List::DestroyList(List &l){
	Node *tmp = l.head;
	while(tmp!=NULL){
		l.head=l.head->next;
		delete tmp;
		tmp=l.head;
	}
	length = 0;
	return true;
}
bool List::ClearList(List &l){
	Node *tmp=l.head->next;
	while(tmp!=NULL){
		l.head->next=l.head->next->next;
		delete tmp;
		tmp=l.head->next;
	}
	length = 1;
	return true;
}
bool List::ListEmpty(List l){
	return l.head==NULL;
}
int List::ListLength(List l){
	return l.length;
}
bool List::GetElem(List l,int i,int &e){
	if(i<1 || i>l.length||l.head==NULL)return false;
	Node *tmp=l.head;
	for(int n=1;n<i;n++){
		tmp=tmp->next;
	}
	e=tmp->data;
	return true;
}
int List::LocateElem(List l,int e){
	Node *tmp=l.head;
	int count=1;
	while(tmp!=NULL){
		if(tmp->data==e)return count;
		tmp=tmp->next;
		count++;
	}
	return 0;
}
bool List::ListInsert(List &l,int i,int e){
	if(i<1 || i>length+1)return false;
	if(i==1){
		Node *now = new Node();
		now->data=e;
		now->next=l.head;
		l.head=now;
		l.last->next=now;
		l.last=now;
		length++;
		return true;
	}
	Node *tmp = l.head;
	while(--i){
		tmp=tmp->next;
	}
	Node *now =new Node();
	now->data=e;
	now->next=tmp->next;
	tmp->next=now;
	l.last->next=now;
	l.last=now;
	length++;
	return true;
}
bool List::ListDelete(List &l,int i,int &e){
	if(i<1 || i>length)return false;
	if(i==1){
		e=l.head->data;
		l.head=l.head->next;
		length--;
		return true;
	}
	Node *tmp=l.head;
	i--;
	while(--i){
		tmp=tmp->next;
	}
	tmp->next=tmp->next->next;
	length--;
	return true;
	
}


