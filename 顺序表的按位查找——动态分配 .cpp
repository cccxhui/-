//˳���İ�λ���ҡ�����̬���� 

#define InitSize 10

typedef struct{
	ElemType *data;
	int MaxSize;
	int length;
}SeqList;

Elemtype GetElem(SeqList L, int i){
	return L.data[i-1];
}
