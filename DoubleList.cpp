#include <iostream>
#include "DoubleList.h"

using namespace std;

DoubleList::DoubleList() {
    pHead = NULL;
    pCurrent = NULL;
    pTail = NULL;
}

void DoubleList::setNode(int data) {
    node *pNode = new node;

    pNode->data = data;
    pNode->pNext = NULL;
    pNode->pPrev = NULL;

    if (pHead != NULL) {
        pCurrent = pHead;

        while (pCurrent->pNext != NULL) {
            pCurrent = pCurrent->pNext;
        }

        pCurrent->pNext = pNode;
        pNode->pPrev = pCurrent;
        pTail = pNode;
    }
    else {
        pHead = pNode;
        pTail = pNode;
    }
}

void DoubleList::getTail() {
    cout << pTail->pPrev->data << endl;
}

void DoubleList::getDoubleList() {
    if (pHead != NULL) {
        pCurrent = pHead;

        while (pCurrent != NULL) {
            cout << pCurrent->data << "\t" << flush;
            pCurrent = pCurrent->pNext;
        }

        cout << endl;
    }
    else {
        cout << "Nu exista nici un element in lista." << endl;
    }
}

void DoubleList::getDoubleListFromRight() {
    if (pHead != NULL) {
        pCurrent = pTail;

        while (pCurrent != NULL) {
            cout << pCurrent->data << "\t" << flush;
            pCurrent = pCurrent->pPrev;
        }

        cout << endl;
    }
    else {
        cout << "Nu exista nici un element in lista." << endl;
    }
}

void DoubleList::parseToSimpleLinkedList() {

}


