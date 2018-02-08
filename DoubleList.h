#ifndef UNTITLED_DOUBLELIST_H
#define UNTITLED_DOUBLELIST_H

#include <string>
#include "List.h"

class DoubleList: public List{
private:
    struct node {
        int data;
        node *pNext;
        node *pPrev;
    };
    node *pHead;
    node *pCurrent;
    node *pTail;

public:
    DoubleList();

    void setNode(int data);

    void getTail();

    void getDoubleList();

    void getDoubleListFromRight();

    void parseToSimpleLinkedList();

};


#endif //UNTITLED_DOUBLELIST_H
