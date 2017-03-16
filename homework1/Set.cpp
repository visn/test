using namespace std;
#include"Set.h"
/*class Set{
protected:
	List lists;
public:
	Set();
	Set Union(Set set);//bing
	Set Intersection(Set set);//jiao
	Set Except(Set set);//jian
};
*/
Set Set::Union(Set set){
	int Mylength=lists.ListLength(set.lists)+1;
	int Insertlength=set.lists.ListLength(set.lists);
	int e;
	for(int i=0;i<Insertlength;i++){
		GetElem(set.lists,i+1,&e);
		lists.ListInsert(lists,Mylength++,e);
	}
}

