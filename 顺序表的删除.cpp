//˳����ɾ��

#define MaxSize 10			//������󳤶� 
typedef struct{
	int data[MaxSize];		//�þ�̬������������
	int length;				//��˳���ĵ�ǰ���� 
}SqList; 					//˳�������Ͷ���

//ɾ��˳���iλ�õ����ݲ�����e 
bool ListDelete(SqList &L, int i, int &e){
	if(i < 1 || i > L.length)			//�ж�i�ķ�Χ�Ƿ���Ч
		return false;
	e = L.data[i-1];		//����ɾ����Ԫ�ظ�ֵ��e 
	
	for(int j = 1; j < L.length; j++){  //����i��Ԫ�غ��Ԫ��ǰ��
		L.data[j-1] = L.data[j]; 
	} 

	L.length--;				//����1
	return true; 
} 

int main(){
	SqList L;				//����һ��˳���
	InitList(L);			//��ʼ��һ��˳���
	int e = -1; 
	if(ListDelete(L, 3, e))
		printf("��ɾ����3��Ԫ�أ�ɾ��Ԫ��ֵΪ%d\n", e);
	else
		printf("λ��i���Ϸ���ɾ��ʧ��\n");
	return 0; 
}
