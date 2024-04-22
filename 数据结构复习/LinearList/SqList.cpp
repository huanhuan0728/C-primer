//
//  main.cpp
//  LinearList
//
//  Created by xuhuan lu on 2024/3/25.
//

#include <iostream>
# define InitSize 50
# define ElemType int
//typedef struct {
//    ElemType *data;
//    int length;
//}SqList;
//
//// SqList L;
//void InitList (SqList &L){
//    L.data = (ElemType *) malloc(sizeof(ElemType) * InitSize);
//    L.length = 0;
//    L.MaxSize = InitSize;
//}
//
//bool ListInsert(SqList &L, int i, ElemType e){
//    if (i < 1 || i > L.length +1)   // 判断i的范围是否有效
//        return false;
//    if (L.length >= L.MaxSize)
//        return false;
//    for (int j = L.length; j >= i; j--)
//        L.data[j] = L.data[j-1];
//    L.data[i-1] = e;
//    L.length++;
//    return true;
//}
using namespace std;

typedef struct{
    ElemType *data;
    int length, MaxSize;
} SqList;

void InitList(SqList &L){
    L.data = (ElemType *) malloc(sizeof(ElemType) * InitSize);
    L.length = 0;
    L.MaxSize = InitSize;
}

bool ListInsert(SqList &L, int i, ElemType e){
    // 判断i的范围是否有效
    if(i < 1 || i > L.length + 1)
        return false;
    
    // 当前储存空间已满，不能插入
    if(L.length >= L.MaxSize)
        return false;
    // 将第i个元素及之后的元素后移
    for (int j = L.length; j >= i; j--){
        L.data[j] = L.data[j-1];
    }
    
    // 在位置i放入e
    L.data[i-1] = e;

    // 线性表长度加1
    L.length++;
    return true;
}

// 删除操作
bool ListDelete(SqList &L, int i, ElemType &e){
    // 判断i的范围是否有效
    if(i<1 || i>L.length)
        return false;
    
    // 将被删除的元素赋值给e
    e = L.data[i-1];
    // 将第i个位置后的元素前移
    for (int j=i; j<L.length; j++)
        L.data[j-1] = L.data[j];
    // 线性表的长度减1
    L.length--;
    return true;
}

// 按值查找
int LocateElem(SqList L, ElemType e){
    int i;
    for (i=0; i < L.length; i++){
        if(L.data[i] == e)
            return i+1;
    }
    
    return 0;
}
void PrintList(SqList &L){
    for (int i = 1; i <= L.length; i++)
        cout << L.data[i-1] << " " << endl;
}

void MergeList(SqList La, SqList Lb, SqList &Lc){
    // 已知线性表La和Lb中的数据元素按值非递减排序
    // 归并La和Lb得到新的线性表Lc，Lc的数据元素也按值非递减排列
    InitList(Lc);
    int i = 1, j = 1, k = 0;
    
    
    
}

int main(int argc, const char * argv[]) {
    SqList L;
    InitList(L);
    for (int i=1; i <= 10; i++){
        ListInsert(L, i, i);
    }
    
    PrintList(L);

    
        
    return 0;
}

