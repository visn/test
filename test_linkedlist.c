#include<stdio.h>
#include<malloc.h>
#include<algorithm>
#include<cmath>
#include<iostream>
using namespace std;
struct number {
	struct number* next;
	int integer;
};
int main() {
	int point = 0;
	int input;
	struct number *head =NULL, *now=NULL, *last = NULL;
	for (int i = 0; i < 10; i++) {
		now = (struct number*)malloc(sizeof(struct number));
		//now->integer = input;
		if (head == NULL) {
			head = now;
			last = now;
		}
		else {
			last->next = now;
			last = now;
		}
		if (i == 9) 
			last->next = head;
	}
	now = head;
	int i;
	while (cin >> now->integer) {
		now = now->next;
		struct number* temp = head;
		point++;
		point = min(point, 10);
		for (i = 0; i < point; i++) {
			printf("list%d=%d\n", i + 1, temp->integer);
			temp = temp->next;
		}
	}
	return 0;
}
