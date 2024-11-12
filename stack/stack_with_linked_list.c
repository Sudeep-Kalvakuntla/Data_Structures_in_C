// Implementation of stack using linked list


#include <stdio.h>
#include <stdlib.h>

struct Stack {
  int data;
  struct Stack* next;
};

struct Stack* top = NULL;

void push(){
  int a;
  puts("Enter element to be pushed");
  scanf("%d", &a);
  struct Stack* newNode = (struct Stack*) malloc(sizeof(struct Stack));
  newNode->data = a;
  newNode->next = top;
  top = newNode;
}

void pop(){
  struct Stack* temp = (struct Stack* ) malloc(sizeof(struct Stack));
  temp = top;
  if (top == NULL) {
    puts("Stack is empty");
  }
  else {
    printf("The popped element is %d\n", top->data);
    top = top->next;
    free(temp);
  }
}

void peek(){
  if (top == NULL) {
  } 
  else {
    printf("The top element is %d\n", top->data);
  }
}

void display(){
  struct Stack* temp = (struct Stack*) malloc(sizeof(struct Stack));
  temp = top;
  if (top == NULL) {
    puts("Stack is empty");
  } 
  else {  
    puts("");
    while (temp != NULL) {
      printf("%d\n", temp->data);
      temp = temp -> next;
    }
  }
  puts("");
}

int main(){
  int option;
  while (1) {
    puts("Which operation would you like to perform?\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");

    scanf("%d", &option);

    switch (option) {
      case 1: 
              push();
              break;
      case 2: 
              pop();
              break;
      case 3: 
              peek();
              break;
      case 4:
              display();
              break;
      case 5:
              exit(0);
              break;
      default:
              puts("Unknown operation");
    }
  }

  return 0;
}
