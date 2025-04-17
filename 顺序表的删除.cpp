//顺序表的删除

#define MaxSize 10			//定义最大长度 
typedef struct{
	int data[MaxSize];		//用静态的数组存放数据
	int length;				//用顺序表的当前长度 
}SqList; 					//顺序表的类型定义

//删除顺序表i位置的数据并存入e 
bool ListDelete(SqList &L, int i, int &e){
	if(i < 1 || i > L.length)			//判断i的范围是否有效
		return false;
	e = L.data[i-1];		//将被删除的元素赋值给e 
	
	for(int j = 1; j < L.length; j++){  //将第i个元素后的元素前移
		L.data[j-1] = L.data[j]; 
	} 

	L.length--;				//表长减1
	return true; 
} 

int main(){
	SqList L;				//声明一个顺序表
	InitList(L);			//初始化一个顺序表
	int e = -1; 
	if(ListDelete(L, 3, e))
		printf("已删除第3个元素，删除元素值为%d\n", e);
	else
		printf("位序i不合法，删除失败\n");
	return 0; 
}
