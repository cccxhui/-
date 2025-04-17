//顺序表的实现——动态分配

#include<stdio.h>
#include<stdlib.h>			//malloc和free函数的头文件 
#define InitSize 10 			//默认的初始值 

typedef struct{
	int *data;		 		//指示动态分配数组的指针
	int MaxSize;			//顺序表的最大容量 
	int length; 			//顺序表当前的长度 
}SeqList; 					//顺序表的类型定义

void InitList(SeqList &L) {
	//用malloc函数申请一片连续的存储空间
	L.data = (int*)malloc(InitSize*sizeof(int)); 
	L.length = 0; 
	L.MaxSize = InitSize;
}

int main(){
	SeqList L;				//声明一个顺序表
	InitList(L);			//初始化一个顺序表
	for(int i = 0; i < MaxSize; i++){
		printf("data[%d] = %d\n", i, L.data[i]);	
	}
	return 0; 
} 

