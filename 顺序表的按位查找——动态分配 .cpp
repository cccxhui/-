//顺序表的按位查找——动态分配 

#define InitSize 10

typedef struct{
	ElemType *data;
	int MaxSize;
	int length;
}SeqList;

Elemtype GetElem(SeqList L, int i){
	return L.data[i-1];
}
