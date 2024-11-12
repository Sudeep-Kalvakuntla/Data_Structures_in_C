#include <stdio.h>
#include <stdlib.h>

struct Queue {
  int data;
  struct Queue* next;
};

struct Queue* front = NULL;
struct Queue* rear = NULL;

void enqueue (int x){
  struct Queue* newNode = (struct Queue* ) malloc(sizeof(struct Queue));

  newNode -> data = x;
  newNode -> next = NULL;

  if (front == NULL && rear == NULL) {
    front = rear = newNode;
  }
  else {
    rear -> next = newNode;
    rear = newNode;
  }
}

void dequeue (){
  struct Queue* temp = front;
  if (front == NULL && rear == NULL) {
    puts("Queue is empty");
  }
  else{
    printf("The element that got dequeued is %d\n", front->data);
    front = front -> next;
    free(temp);
  }
}

void peek (){
  if (front == NULL && rear == NULL) {
    puts("Queue is empty");
  }
  else {
    printf("The top element is %d\n", front->data);
  }
}

void display (){
  struct Queue* temp = front;

  if (front == NULL && rear == NULL) {
    puts("Queue is empty");
  } 
  else {
    while (temp != NULL) {
      printf("%d\n", temp -> data);
      temp = temp -> next;
    }
  }
  puts("");
}

int main (){
  int option, value;

  while (1) {
    printf("Which operation would you like to perform?\n1. Enqueue 2. Dequeue 3. Peek 4. Display 5. Exit ");
    scanf("%d", &option);

    switch (option) {
      case 1:
          puts("Enter the value");
          scanf("%d", &value);
          enqueue(value);
          break;
      case 2:
          dequeue();
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
    }

  }

  return 0;
}
