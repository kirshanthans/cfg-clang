#include <stdlib.h>
struct node;
typedef struct node{
	int x;
	struct node * l;
	struct node * r;
}Node;

void traverse(Node * n){
	if(n == NULL) return;
	n->l->x = n->x;
	traverse(n->l);
	traverse(n->r);
	return;
}

