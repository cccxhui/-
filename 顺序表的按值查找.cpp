//˳���İ�ֵ����

#define InitSize 10

typedef struct{
	ElemType *data;		//�þ�̬�ġ����顱�������Ԫ�� 
	int length;			//˳���ǰ�ĳ��� 
}SqList;

//��˳���L�в��ҵ�һ��Ԫ��ֵ����e��Ԫ�أ���������λ�� 
int LocateElem(SqList L, ElemType e){
	for(int i = 0; i < L.length; i++)
		if(L.data[i] == e)
			return i+1;	//�����±�Ϊi��Ԫ��ֵ����e��������λ��Ӧ+1
	return 0; 
}

int main(){
	SqList L;
	InitList(L);
	LocateElem(L, 7);
	return 0;
}
