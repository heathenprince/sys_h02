struct node {
  int val; //int value
  struct node *next; //ptr to next node!
};

void print_list( struct node* node );

struct node* insert_front( struct node* node, int i );

struct node* free_list( struct node* node );
  
