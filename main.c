#include <stdio.h>
#include "./chapter2/SqList.h"

int main() {
    SqList l;
    InitList_Sq(&l);
    ListInsert_Sq(&l, 1, 3);
    ListInsert_Sq(&l, 1, 2);

    ElemType e;

    ListDelete_Sq(&l, 1, &e);

    printf("Hello, World!\n%d\n", e);
    return 0;
}