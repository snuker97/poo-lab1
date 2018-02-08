#include <iostream>
#include "List.h"
#include "DoubleList.h"

using namespace std;

int main() {

//    List list;
//
//    list.setSimpleNode(1);
//    list.setSimpleNode(2);
//    list.setSimpleNode(3);
//    list.setSimpleNode(4);
//    list.setSimpleNode(5);
//    list.setSimpleNode(6);
//
//    list.getList();

    DoubleList doubleList;

    doubleList.setNode(1);
    doubleList.setNode(2);
    doubleList.setNode(3);
    doubleList.setNode(4);
    doubleList.setNode(5);
    doubleList.setNode(6);

    doubleList.parseToListFromRight().getList();


    return 0;
}