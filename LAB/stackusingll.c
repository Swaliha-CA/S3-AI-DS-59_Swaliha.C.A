//implementation of stack using singly linked list
//Swaliha_59 
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node* next;
} Node;
Node* createNode(int new_data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = new_data;
    new_node->next = NULL;
    return new_node;
}



typedef struct Stack {
    Node* head;
} Stack;



void initializeStack(Stack* stack) { stack->head = NULL; }



int isEmpty(Stack* stack) {
  
    
    return stack->head == NULL;
}



void push(Stack* stack, int new_data) {
  
    
    Node* new_node = createNode(new_data);


    if (!new_node) {
        printf("\nStack Overflow");
        return;
    }


    
    new_node->next = stack->head;


   
    stack->head = new_node;
}



void pop(Stack* stack) {
  
  
    if (isEmpty(stack)) {
        printf("\nStack Underflow\n");
        return;
    }
    else {
      
        
        Node* temp = stack->head;


       
        stack->head = stack->head->next;


        free(temp);
    }
}



int peek(Stack* stack) {
  
   
    if (!isEmpty(stack))
        return stack->head->data;
    else {
        printf("\nStack is empty");
        return INT_MIN;
    }
}


int main() {
  
    Stack stack;
    initializeStack(&stack);


    push(&stack, 11);
    push(&stack, 22);
    push(&stack, 33);
    push(&stack, 44);


  
    printf("Top element is %d\n", peek(&stack));


  
   
      printf("Removing two elements...\n");
    pop(&stack);
    pop(&stack);


    printf("Top element is %d\n", peek(&stack));


    return 0;
}
