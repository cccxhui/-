//˳���Ĳ���

#define MaxSize 10			//������󳤶� 
typedef struct{
	int data[MaxSize];		//�þ�̬������������
	int length;				//��˳���ĵ�ǰ���� 
}SqList; 					//˳�������Ͷ���

bool ListInsert(SqList &L, int i, int e){
	if(i < 1 || i > L.length + 1)		//�ж�i�ķ�Χ�Ƿ���Ч
		return false;
	if(L.length >= MaxSize)				//��ǰ�洢�ռ����������ܲ���
		return false;
	
	for(int j = L.length; j >= i; j--){ //����i��Ԫ�ؼ���֮���Ԫ�غ���
		L.data[j] = L.data[j - 1]; 
	} 
	L.data[i - 1] = e		//��λ��i����e
	L.length++;				//����1
	return true; 
} 

int main(){
	SqList L;				//����һ��˳���
	InitList(L);			//��ʼ��һ��˳���
	ListInsert(L, 3, 7);	//��˳���L�ĵ����в���7
	
	return 0; 
}
