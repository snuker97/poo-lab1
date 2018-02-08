#ifndef _LIST_H_
#define _LIST_H_

class List {
private:
    struct node {
        int data;
        node *pNext;
    };

    node *pHead;
    node *pCurrent;

public:
    List();

    void setNode(int data);

    void getList();
};


#endif // _LIST_H_