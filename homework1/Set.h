#include<iostream>
#include"List.h"
#ifndef sets
#define sets
class Set{
protected:
	List lists;
public:
	Set();
	Set Union(Set set);//bing
	Set Intersection(Set set);//jiao
	Set Except(Set set);//jian
};
#endif
