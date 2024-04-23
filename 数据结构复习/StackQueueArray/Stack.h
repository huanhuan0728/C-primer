//
//  stack.h
//  StackQueueArray
//
//  Created by xuhuan lu on 2024/4/23.
//

#ifndef stack_h
#define stack_h

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define MaxSize 50
#define ElemType int
typedef struct{
    ElemType data[MaxSize];
    int top;
} SqStack;
// 测试用的
void printf_hello(void);

// 栈的基本操作，，解算法题时，若题干未作出限制，则可以直接使用这些基本的操作函数
// 初始化一个栈
void InitStack(SqStack *S);

// 判断一个栈是否为空，若栈S为空返回true，否则返回false
bool StackEmpty(SqStack *S);

// 进栈，若栈S未满，则将x加入使之成为新栈顶
bool Push(SqStack *S, ElemType x);

// 出栈，若栈S非空，则弹出栈顶元素，并用x返回
bool Pop(SqStack *S, ElemType *x);

// 读栈顶元素，但不出栈，若栈s非空，则用x返回栈顶元素
bool GetTop(SqStack *S, ElemType *x);

// 销毁栈，并释放栈S占用的储存空间
bool DestroyStack(SqStack *s);



#endif /* stack_h */
