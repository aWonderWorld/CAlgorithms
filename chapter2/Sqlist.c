//
// Created by lenovo on 2019/11/26.
//
#include "SqList.h"
#include <stdlib.h>
#include <stdio.h>

Status InitList_Sq(SqList *Li) {
    Li->elem = (ElemType *) malloc(LIST_INIT_SIZE * sizeof(ElemType));
    if (!Li->elem) exit(OVERFLOW);
    Li->length = 0;
    Li->listSize = LIST_INIT_SIZE;
    return OK;
}

Status ListInsert_Sq(SqList *Li, int i, ElemType e) {
    if (i<1 || i > Li->listSize) return ERROR;
    if (Li->length >= Li->listSize) {
        ElemType *newbase = (ElemType * ) realloc( Li->elem, (Li->listSize + LISTINCREMENT) * sizeof(ElemType));
        if (!newbase) exit(OVERFLOW);
        Li->elem=newbase;
        Li->listSize+=LISTINCREMENT;
    }
    ElemType *q= &(Li->elem[i-1]);
    for ( ElemType *p = Li->elem[Li->length -1]; p>=q; --p) *(p+1) = *p;
    *q=e;
    ++Li->length;
    return OK;
}

//TODO: fix
Status ListDelete_Sq(SqList *l, int i , ElemType *e) {
    if ( ( i < 1) || (i > l->length)) return ERROR;
    ElemType *p= &(l->elem[i-1]);
    e=p;
    ElemType *q = l->elem + l->length -1;
    for( ++p ; p <= q; ++p ) *(p-1) = *p;
    --l->length;
    return OK;
}
