//
//  LNode2.h
//  LNode
//
//  Created by xuhuan lu on 2024/4/24.
//

#ifndef LNode2_h
#define LNode2_h

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define ElemType int
typedef struct LNode{
    ElemType data;
    struct Lnode *next;
}LNode, *LinkList;

// 初始化链表
bool InitList(LinkList *L);

// 求表长
int ListLength(LinkList L);

// 按序号查找结点
LNode *GetItem(LinkList L);

// 按值查找结点
LNode *LocateItem(LinkList L);

// 在第i个结点进行前插操作
bool ListInset(LinkList *L, ElemType e);

// 使用尾插法创建单链表
bool InitList_TailInsert(LinkList *L);

// 删除第i个结点，并使用e返回删除的元素
bool DeleteItem(LinkList *L, ElemType *e);

// 
#endif /* LNode2_h */
