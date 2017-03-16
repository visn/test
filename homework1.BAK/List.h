#include<iostream>
#ifndef list
#define list
class List{
public:
	struct Node{
		int data;
		Node* next;
	};
	bool InitList(List &l);
	bool DestroyList(List &l);
	bool ClearList(List &l);
	bool ListEmpty(List l);
	int ListLength(List l);
	bool GetElem(List l,int i,int &e);
	int LocateElem(List l,int e);
	bool ListInsert(List &l,int i,int e);
	bool ListDelete(List &l,int i,int &e);
};
#endif

