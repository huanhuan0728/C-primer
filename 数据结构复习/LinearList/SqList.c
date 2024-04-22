//
//  main.c
//  LinearList
//
//  Created by xuhuan lu on 2024/4/22.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define InitSize 50
#define Elemtype int

typedef struct {
    Elemtype *data;
    int length;
    int MaxSzie;
}SQList;

void InitList(SQList *L){
    L->data = (Elemtype *)malloc(sizeof(Elemtype) * InitSize);
    L->length = 0;
    L->MaxSzie = InitSize;
}

// 在第i个位置插入值为e的结点
bool ListInsert(SQList *L, int i, Elemtype e){
    // 判断i是否有效
    if (i < 1 || i > L->length+1)
        return false;
    
    // 判断当前储存空间是否已经满了
    if (L->length >= L->MaxSzie)
        return false;
    
    // 将第i个以及之后的元素后移
    for (int j = L->length; j >= i; j--){
        L->data[j] = L->data[j-1];
    }
    
    // 放入元素e
    L->data[i-1] = e;
    
    // 表的长度加1
    L->length++;
    
    return true;
}

// 删除第i个元素操作，并使用指针返回被删除的值
bool DeleteList(SQList *L, int i, Elemtype *e){
    // 判断i是否有效
    if (i < 1 || i > L->length)
        return false;
    
    // 返回被删除的值
    *e = L->data[i-1];
    
    // 将第i+1个元素往前移动一位
    for (int j = i; j < L->length; j++){
        L->data[j-1] = L->data[j];
    }
    
    L->length--;
    return true;
}

// 按值查找
bool LocateElem(SQList *L, Elemtype e){
    int i;
    for (i = 0; i < L->length; i++){
        if (L->data[i] == e)
            return i;
    }
    return false;
}



int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
