#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


////冒泡排序
//void bubble_sort(int arr[], int sz)
//{
//	//确定冒泡排序的趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//		int j;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//}
//
//int main()
//{
//	int arr[] = { 0,1,2,4,3,5,6,7,8,9};
//	int i;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//对arr进行排序，排成升序
//	bubble_sort(arr,sz);//冒牌排序函数
//	for (i = 0; i < sz ; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

int main()
{
	int arr[] = { 1,2,3,4,5 };
	printf("%p\n", arr);//数组名是首元素地址
	printf("%p\n", arr + 1);
	//1.sizeof(数组名) - 数组名表示整个数组，计算的是整个数组的大小，单位是字节。
	printf("%p\n", &arr);
	printf("%p\n", &arr+1);
	//2.&数组名 - 数组名代表 整个数组，取出的是整个数组的地址。
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);

	printf("%d\n", *arr);
	return 0;
}