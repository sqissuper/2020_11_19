#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i <= sz - 1; i++)
//	{
//		int j = 0;
//		int temp = 0;
//		for (j = 0; j <= sz - 1 - i; j++)
//		{
//			if (arr[j]<arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//void printf_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n" );
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	printf_arr(arr, sz);
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6 };
//	int* pa = &arr1;
//	//int arr2[10] = { 1, 2, 3, 4, 5, 6 };
//	//char ch1[5] = { 'a', 'b', 'c', 'd' };
//	printf("%d\n", &arr1);
//	//printf("%d\n", sizeof(arr2));
//	//printf("%d\n", strlen(ch1));
//	//printf("%d\n", sizeof(ch1));
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			sum = j*i;
//			printf("%d=%d*%d", sum,j,i);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//void result_arr(int arr[])
//{
//	int* pa = arr;
//	int i;
//	int ARR = 0;
//	for (i = 0; i < 9; i++)
//	{
//		int ARR = *(pa + i);
//		printf("%d", ARR);
//	}
//}
//int main()
//{
//	int arr[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	result_arr(arr);
//	//int* pa = arr;
//	//int i = 0;
//	//for (i = 0; i < 9; i++)
//	//{
//	//	printf("%d", *(pa+i));
//	//}
//	return 0;
//
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		if ()
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0)
//			printf("%d ", i);
//
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int count = 0;
//	scanf("%d%d", &m, &n);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((m >> i) & 1) != ((n >> i) & 1)
//		{
//			conu++;
//		}
//	}
//	printf("%d", count);
//	return 0;

//}
//if (((m >> i) & 1) != ((n >> i) & 1))
//{
//	count++;
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 1; i <= 31; i += 2)
//	{
//		printf("%d", ((n >> i) & 1));
//	}
//	printf("\n");
//	for (i = 2; i <= 32; i += 2)
//	{
//		printf("%d", ((n >> i) & 1));
//	}
//	return 0;
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 100; i++)
//	{
//		if (i % 10 == 9 || i / 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//
//}
//#include <string.h>
//struct Book
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	struct Book b = { "¸ßÊý", 30 };
//
//		printf("%s %d", b.name, b.price);
//	return 0;
//}
