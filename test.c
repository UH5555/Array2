#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


////ð������
//void bubble_sort(int arr[], int sz)
//{
//	//ȷ��ð�����������
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
//	//��arr���������ų�����
//	bubble_sort(arr,sz);//ð��������
//	for (i = 0; i < sz ; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

int main()
{
	int arr[] = { 1,2,3,4,5 };
	printf("%p\n", arr);//����������Ԫ�ص�ַ
	printf("%p\n", arr + 1);
	//1.sizeof(������) - ��������ʾ�������飬���������������Ĵ�С����λ���ֽڡ�
	printf("%p\n", &arr);
	printf("%p\n", &arr+1);
	//2.&������ - ���������� �������飬ȡ��������������ĵ�ַ��
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);

	printf("%d\n", *arr);
	return 0;
}