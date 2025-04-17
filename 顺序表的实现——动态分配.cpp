//˳����ʵ�֡�����̬����

#include<stdio.h>
#include<stdlib.h>			//malloc��free������ͷ�ļ� 
#define InitSize 10 			//Ĭ�ϵĳ�ʼֵ 

typedef struct{
	int *data;		 		//ָʾ��̬���������ָ��
	int MaxSize;			//˳����������� 
	int length; 			//˳���ǰ�ĳ��� 
}SeqList; 					//˳�������Ͷ���

void InitList(SeqList &L) {
	//��malloc��������һƬ�����Ĵ洢�ռ�
	L.data = (int*)malloc(InitSize*sizeof(int)); 
	L.length = 0; 
	L.MaxSize = InitSize;
}

void IncreaseSize(SeqList &L, int len){ //���Ӷ�̬����ĳ��� 
	int *p = L.data;
	L.data = (int*)malloc((L.MaxSize + len)*sizeof(int));
	for(int i = 0; i < L.length; i++){
		L.data[i] = p[i];	//�����ݸ��Ƶ������� 
	}
	L.MaxSize = L.MaxSize + len;		//˳�����󳤶�����len
	free(p);				//�ͷ�ԭ�����ڴ�ռ� 
}

int main(){
	SeqList L;				//����һ��˳���
	InitList(L);			//��ʼ��һ��˳���
	IncreaseSize(L, 5);		//����˳���ĳ��� 
	return 0;
} 

