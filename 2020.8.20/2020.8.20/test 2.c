#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ��
 //int main()
 //{
 //   int s;
 //   double sum, t, d;
 //   sum = 1.0;
 //   d = 2.0;
 //   s = 1;
	//  while (d <= 100)
	//	   {
	//      s = (-1)*s;
 //         t = s*(1 / d);
 //         sum = sum + t;
 //       d = d + 1;
	//     }
	//    printf("%f\n", sum);
	//    return 0;
	// }







//int main()
//{
//	int i;
//	double sum = 0.0;
//	for (i = 1; i <= 2; i++)
//	{
//
//		sum += pow(-1, i + 1) * 1 / i;
//	}
//	printf("sum =%lf\n", sum);
//	return 0;
//}





////����ַ��������ƶ������м��ۡ�
//#include<Windows.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!";
//	char arr2[] = "###################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//sleep  ˯�ߺ��� 1000����=1��
//		system("cls");// cls �����Ļ
//		left++;
//	    right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//




// ģ���û���¼�龰���������ֻ�ܵ�¼���Ρ�
//int main()
//{
//	int i = 0;

//������ȷ������Ϊ��123456
//
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		//�ȽϹ�ϵ
//		//strcmp -  �����������Ƚ��ַ����Ĵ�С��ϵ��
//		//�⺯��-  ����Ҫ��ͷ�ļ���:  string.h
//		if (strcmp(password,"123456")==0)
//		{
//			printf("������ȷ\n");
//			break;
//		}
//		else
//		{
//			printf("���������������\n");
//		}
//
//	}
//	if (i == 3)
//	{
//		printf("������������˳�����\n");
//	}
//	return 0;
//}




















// ���ֲ���
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	
//	int n = 7;
//
//	int left = 0;
//	int right = 9;
//
//	//���������±������м�Ԫ�ص��±�(���ַ�)
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>n)
//		{
//			right = mid - 1;
//		}
//		else
//		{ 
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����\n");
//	}
//
//
//
//	return 0;
//}



//���β���
//��һ�����������в��Ҿ����ĳ������N

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int n = 17;
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] == n)
//		{
//			printf("�ҵ���:%d\n", i);
//			break;
//		}
//	}
//	if (i == 10)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}



//����1��+2������+n!
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	int j = 0;
//	for (j  = 1; j  <= 4; j++)
//	{
//		ret *= j;
//		sum += ret;
//	}
//	
//	printf("%d\n", sum);
//	return 0;
//}


//����n�Ľ׳�

//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//
//	//while (i <= n)
//	//{
//	//   ret = ret * i;
//	//	i++;
//	//}
//
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}