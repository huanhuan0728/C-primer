//
//  LNode2.c
//  LNode
//
//  Created by xuhuan lu on 2024/4/24.
//

#include "LNode2.h"

//typedef struct LNode{
//    ElemType data;
//    struct Lnode *next;
//}LNode, *LinkList;

// 初始化链表
bool InitList(LinkList *L){
    *L = (LNode *)malloc(sizeof(LNode));
    (*L)->next = NULL;
    return true;
}

// 求表长
int length(LinkList L){
    int len = 0;
    LNode *p = L;
    while (L->next != NULL){
        len++;
        p = p->next;
    }
    return len;
}

// 按序号查找节点
LNode *GetElem(LinkList L, int i){
    LNode *p = L;
    int j = 0;
    while ( p != NULL && j < i){
        p = p->next;
        j++;
    }
    return p;
}

// 按值查找表节点
LNode *LocateElem(LinkList L, ElemType e){
    LNode *p = L->next;
    while (p != NULL && p->data != e){
        p = p->next;
    }
    return p;   // 找到返回p，否则返回null
}
    
// 在第i个结点进行前插操作
bool ListInsert(LinkList *L, int i, ElemType e){
    LNode *p = *L;
    int j = 0;
    // 找到第i-1个结点
    while (p != NULL && j < i-1){
        p = p->next;
        j++;
    }
    // 如果i不合法
    if(p == NULL)
        return false;
    LNode *s = (LNode *) malloc(sizeof(LNode));
    s->data = e;
    s->next = p->next;
    p->next = s;
    
    return true;
}

//  用尾插法创建单链表
LinkList InitList_TailInsert(LinkList *L){
    int x;
    *L = (LNode *)malloc(sizeof(LNode));
    LNode *s, *r = *L;
    scanf("%d", &x);
    while (x != 9999) {
        s = (LNode *) malloc(sizeof(LNode));
        s->data = x;
        r->next = s;
        r = r->next;
        scanf("%d", &x);
    }
    r->next = NULL;
    return *L;
}

// 用尾插法插入新元素
bool List_TailInsert(LinkList *L, int e){
    LNode *s = (LNode *)malloc(sizeof(LNode));
    s->data = e;
    LNode *q = *L;
    // 寻找尾结点
    while(q->next != NULL){
        q = q->next;
    }
    q->next = s;
    return true;
}

// 删除第i个结点，并用e返回删除的结点的值
bool ListDelete(LinkList *L, int i, ElemType *e){
    LNode *p = *L;  // 指针指向当前扫描到的结点
    int j = 0;  // 记录当前位序
    //  找到i-1个结点
    while (p != NULL && j < i-1){
        p = p->next;
        j++;
    }
    if (p == NULL)   //i值不合法
        return false;
    LNode *q = p->next;
    *e = q->data;
    q = p->next;
    p->next = q->next;
    free(q);
    return true;
}
