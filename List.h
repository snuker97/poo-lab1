#ifndef _LIST_H_
#define _LIST_H_

class List {
private:
    struct simpleNode {
        int data;
        simpleNode *pNext;
    };

    simpleNode *pHead;
    simpleNode *pCurrent;

public:
    List();

    void setSimpleNode(int data);

    void getList();
};


#endif // _LIST_H_