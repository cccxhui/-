//顺序表的按值查找

#define InitSize 10

typedef struct{
	ElemType *data;		//用静态的“数组”存放数据元素 
	int length;			//顺序表当前的长度 
}SqList;

//在顺序表L中查找第一个元素值等于e的元素，并返回其位序 
int LocateElem(SqList L, ElemType e){
	for(int i = 0; i < L.length; i++)
		if(L.data[i] == e)
			return i+1;	//数组下标为i的元素值等于e，返回其位序应+1
	return 0; 
}

int main(){
	SqList L;
	InitList(L);
	LocateElem(L, 7);
	return 0;
}
