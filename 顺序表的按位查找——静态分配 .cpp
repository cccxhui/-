//顺序表的按位查找——静态分配 

#define MaxSize 10

typedef struct{
	ElemType data[MaxSize];
	int length;
}SqList;

Elemtype GetElem(SqList L, int i){
	return L.data[i-1];
}
