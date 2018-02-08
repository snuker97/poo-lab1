#include <iostream>
#include "List.h"
#include "DoubleList.h"

using namespace std;

int main() {

    List list;

    list.setNode(1);
    list.setNode(2);
    list.setNode(3);
    list.setNode(4);
    list.setNode(5);
    list.setNode(6);

    list.getList();

    DoubleList doubleList;

    doubleList.setNode(1);
    doubleList.setNode(2);
    doubleList.setNode(3);
    doubleList.setNode(4);
    doubleList.setNode(5);
    doubleList.setNode(6);

    doubleList.getDoubleListFromRight();

    return 0;
}