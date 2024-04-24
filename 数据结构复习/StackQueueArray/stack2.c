//
//  stack2.c
//  StackQueueArray
//
//  Created by xuhuan lu on 2024/4/24.
//

#include "stack2.h"
// 初始化一个栈
void InitStack(SqStack *S){
    S->top = -1;
}

// 判断一个栈是否为空，若栈S为空返回true，否则返回false
bool StackEmpty(SqStack *S){
    if (S->top == -1) {
        return true;
    }
    else
        return false;
}

// 进栈，若栈S未满，则将x加入使之成为新栈顶
bool Push(SqStack *S, ElemType x){
    if (S->top == MaxSzie - 1) {
        return false;
    }
    S->data[++S->top] = x;
    return true;
}

// 出栈，若栈S非空，则弹出栈顶元素，并用x返回
bool Pop(SqStack *S, ElemType *x){
    if (S->top == -1) {
        return false;
    }
    *x = S->data[S->top--];
    return true;
}

// 读栈顶元素，但不出栈，若栈s非空，则用x返回栈顶元素
bool GetTop(SqStack *S, ElemType *x){
    if (S->top == MaxSzie - 1) {
        return false;
    }
    *x = S->data[S->top];
    return true;
}

// 销毁栈，并释放栈S占用的储存空间
bool DestroyStack(SqStack *s);
