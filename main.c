#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main() {

  struct node *list = 0;

  printf( "%s", "unpopulated linked list:\n" );
  print_list( list );

  int i;
  for (i=0; i < 10; i++)
    list = insert_front( list, i ) ;

  printf( "%s", "populated linked list:\n" );
  print_list( list );

  list = free_list( list );

  printf( "%s", "freed linked list:\n" );
  print_list( list );

  return 0;
}
