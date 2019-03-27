#ifndef STQ_H_INCLUDED
#define STQ_H_INCLUDED
#include <iostream>
#define info(Q)  Q.info
#define head(Q)  Q.head
#define tail(Q)  Q.tail
#define top(S)  S.top
using namespace std;
typedef int infotype;
const int NMAX = 5;
struct Queue {
    infotype info[NMAX];
    int head,tail;
};
struct Stack {
    infotype info[NMAX];
    int top;
};
void createQueue(Queue &Q);
bool isEmpty(Queue Q);
bool isFull(Queue Q);
void Enqueue(Queue &Q,infotype x);
void Dequeue(Queue &Q , int &x);
void printQueue(Queue Q);

void createStack(Stack &S);
bool isEmptyStack(Stack S);
bool isFullStack(Stack S);
void push(Stack &S,infotype x);
void pop(Stack &S, int &x);
void printStack(Stack S);
void Reverse (Stack &S);

#endif // STQ_H_INCLUDED
