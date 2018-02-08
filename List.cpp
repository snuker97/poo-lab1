#include <iostream>
#include "List.h"

using namespace std;

List::List() {
    pHead = NULL;
    pCurrent = NULL;
}

void List::setNode(int data) {
    node *pNode = new node;

    pNode->data = data;
    pNode->pNext = NULL;

    if (pHead != NULL) {
        pCurrent = pHead;

        while (pCurrent->pNext != NULL) {
            pCurrent = pCurrent->pNext;
        }

        pCurrent->pNext = pNode;
    }
    else {
        pHead = pNode;
    }

}

void List::getList() {
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