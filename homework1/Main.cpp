#include<iostream>
using namespace std;
#include"Set.h"
#include"List.cpp"
int main(){
	List* a =new List();
	a->InitList(a);
	return 0;
}
