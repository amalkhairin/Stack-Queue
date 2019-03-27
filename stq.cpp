#include "stq.h"

void createQueue(Queue &Q){
    head(Q) = -1; /** indeks array 0,1,2,3,4 */
    tail(Q) = -1;
}
bool isEmpty(Queue Q){
    if (head(Q) == -1){
        return true;
    } else {
        return false;
    }
}
bool isFull(Queue Q){
    /** alternatif 1*/
    if ((head(Q) == 0) && (tail(Q) == NMAX-1)) {
        return true;
    } else {
        return false;
    }

    /** alternatif 2 */
    if ((head(Q) == 0) && (tail(Q) == NMAX-1)){
        return true;
    } else {
        return false;
    }

    /** alternatif 3 */
    if (tail(Q) == head(Q)-1){
        return true;
    } else {
        return false;
    }
}
void Enqueue(Queue &Q,infotype x){
    /** alternatif 1 */
    if (isEmpty(Q)){
        head(Q) = 0;
        tail(Q) = 0;
        info(Q)[tail(Q)] = x;
    } else {
        if (isFull(Q)){
            cout<< "Queue penuh"<<endl;
        } else {
            tail(Q) = tail(Q) +1;
        }
    }

    /** alternatif 2 */
    if (isEmpty(Q)){
        head(Q) = 0;
        tail(Q) = 0;
        info(Q)[tail(Q)] = x;
    } else {
        if (isFull(Q)){
            cout<< "Queue penuh"<<endl;
        } else {
            if ((head(Q) != 0) && (tail(Q) == NMAX-1)){
                while (head(Q) != 0){
                    int i = head(Q);
                    while (i <= tail(Q)){
                        info(Q)[i-1] = info(Q)[i];
                        i++;
                    }
                    head(Q)--;
                }
                tail(Q) = tail(Q)+1;
                info(Q)[tail(Q)] = x;
            } else {
                tail(Q) = tail(Q)+1;
            }
        }
    }

    /** alternatif 3 */
    if (isEmpty(Q)){
        head(Q) = 0;
        tail(Q) = 0;
        info(Q)[tail(Q)] = x;
    } else {
        if (isFull(Q)){
            cout<< "Queue penuh"<<endl;
        } else {
            tail(Q) = tail(Q) +1;
        }
    }
}
void Dequeue(Queue &Q, int &x){
    /** alternatif 1,2,3 */
    if (isEmpty(Q)){
        cout << "Queue sudah kosong"<<endl;
    } else {
        x = info(Q)[head(Q)];
        head(Q) = head(Q)+1;
    }
}
void printQueue(Queue Q){
    /** alternatif 1,3 */
    if (! isEmpty(Q)){
        int i = head(Q);
        while (i != tail(Q)){
            cout << info(Q)[i] << " ";
            i++;
        }
    } else {
        cout << "Queue kosong"<<endl;
    }

    /** alternatif 2 */
    if (! isEmpty(Q)){
        int i = head(Q);
        while (i != tail(Q)){
            cout << info(Q)[i] << " ";
            if ((i = NMAX-1) && (i != tail(Q))){
                i = 0;
            } else {
                i++;
            }
        }
    } else {
        cout << "Queue kosong"<<endl;
    }
}

void createStack(Stack &S){
    top(S) = -1; /** indeks array 0,1,2,3,4 */
}
bool isEmptyStack(Stack S){
    if (top(S) == -1){
        return true;
    } else {
        return false;
    }
}
bool isFullStack(Stack S){
    if (top(S) == NMAX-1){
        return true;
    } else {
        return false;
    }
}
void push(Stack &S,infotype x){
    if (isFullStack(S)){
        cout << "Stack penuh"<<endl;
    } else {
        top(S) = top(S)+1;
        info(S)[top(S)] = x;
    }
}
void pop(Stack &S , int &x){
    if (isEmptyStack(S)){
        cout << "Stack kosong" <<endl;
    } else {
        x = info(S)[top(S)];
        top(S) = top(S)+1;
    }
}
void printStack(Stack S){
    int x;
    if (isEmptyStack(S)){
        cout << "Stack kosong"<<endl;
    } else {
        while (top(S) != -1){
            pop(S,x);
            cout<< x << " ";
        }
    }
}
void Reverse (Stack &S){
    Stack temp;
    int x;
    createStack(temp);
    while (top(S) != -1){
        pop(S,x);
        push(temp,x);
    }
    S = temp;
}
