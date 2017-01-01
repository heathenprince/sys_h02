#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void print_list( struct node* node ) {
  while( node ) {
    printf( "%d\n", node->val );
    node = node->next;
  }
}

struct node* insert_front( struct node* first, int i ) {
  struct node* newNode;
  newNode = (struct node*)malloc(sizeof(struct node)); // typecast ptr returned by malloc to node ptr
  newNode->val = i;
  newNode->next = first;
  return newNode;
}

struct node* free_list( struct node* node ) {
  while( node ) {
    struct node* nextNode = node->next;
    free(node);
    node = nextNode;
  }
  return node;
}

