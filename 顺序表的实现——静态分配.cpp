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

int main(){
	SeqList L;				//����һ��˳���
	InitList(L);			//��ʼ��һ��˳���
	for(int i = 0; i < MaxSize; i++){
		printf("data[%d] = %d\n", i, L.data[i]);	
	}
	return 0; 
} 

