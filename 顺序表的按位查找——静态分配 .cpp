//˳���İ�λ���ҡ�����̬���� 

#define MaxSize 10

typedef struct{
	ElemType data[MaxSize];
	int length;
}SqList;

Elemtype GetElem(SqList L, int i){
	return L.data[i-1];
}
