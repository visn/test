#include<iostream>
#include"List.h"
#ifndef sets
#define sets
struct Set{
	List lists;
	Set();
};
Set Union(Set set);//bing
Set Intersection(Set set);//jiao
Set Except(Set set);//jian
#endif
