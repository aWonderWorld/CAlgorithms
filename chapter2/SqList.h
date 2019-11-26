//
// Created by lenovo on 2019/11/26.
//

#ifndef CALGORITHMS_SQLIST_H
#define CALGORITHMS_SQLIST_H

#include "../main.h"
#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10

typedef int ElemType;

typedef struct SqList {
    ElemType *elem;
    int length;
    int listSize;
} SqList;

Status InitList_Sq(SqList *Li);

Status ListInsert_Sq(SqList *Li, int i, ElemType e);

Status ListDelete_Sq(SqList *l, int i , ElemType *e);


#endif //CALGORITHMS_SQLIST_H
