//顺序表的插入

#define MaxSize 10			//定义最大长度 
typedef struct{
	int data[MaxSize];		//用静态的数组存放数据
	int length;				//用顺序表的当前长度 
}SqList; 					//顺序表的类型定义

bool ListInsert(SqList &L, int i, int e){
	if(i < 1 || i > L.length + 1)		//判断i的范围是否有效
		return false;
	if(L.length >= MaxSize)				//当前存储空间已满，不能插入
		return false;
	
	for(int j = L.length; j >= i; j--){ //将第i个元素及其之后的元素后移
		L.data[j] = L.data[j - 1]; 
	} 
	L.data[i - 1] = e		//在位置i放入e
	L.length++;				//表长加1
	return true; 
} 

int main(){
	SqList L;				//声明一个顺序表
	InitList(L);			//初始化一个顺序表
	ListInsert(L, 3, 7);	//在顺序表L的第三行插入7
	
	return 0; 
}
