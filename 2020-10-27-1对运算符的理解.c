//#include<stdio.h>
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;//前面第一个运算为真，肯定为真，直接结束后面的运算
//	printf("%d %d %d %d", a, b, c, d);//运行结果2 2 3 4//对此的理解
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ && ++b &&d++;//前面两个为真，还需要进行后面的真假判断
//	printf("%d %d %d %d", a, b, c, d);//运行结果2 3 3 5//对此的理解
//	return 0;
//}