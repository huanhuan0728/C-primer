```c
// 错误的写法1
// 初始化链表
bool InitList(LinkList L){
    L = (LNode *) malloc(sizeof(LNode));
    L->next = NULL;
    return true;
}
// 错误的写法2
// 初始化链表
bool InitList(LinkList *L){
    *L = (LNode *) malloc(sizeof(LNode));
    *L->next = NULL;
    return true;
}

// 正确的写法
// 初始化链表
bool InitList(LinkList *L){
    *L = (LNode *) malloc(sizeof(LNode));
    (*L)->next = NULL;
    return true;
}

```
在错误1里面，首先*LinkList L*L是通过值传递的，这意味着即使在函数内部修改了L，这个改变也不会反映到调用函数的实际参数上。
为了能够修改调用者的数据，应该传递指针的指针或者使用指针的引用。在错误2中，* *L->nex = null*这个写法会被解释为* *(L->next)*，显然不符合需求，
->的优先级比*要高，所以应该写成 * (*L)->next* 。
