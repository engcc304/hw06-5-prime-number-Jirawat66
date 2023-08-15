/*
    รับค่าจากผู้ใช้จำนวน 1 ค่า และให้แสดงจำนวนเฉพาะตั้งแต่ค่าแรก จนถึงค่าที่ผู้ใช้กรอก โดยแสดงจำนวนเฉพาะจาก "มาก ไปหา น้อย"
    (โจทย์ข้อนี้ให้ใช้ For Loop เท่านั้น)
    
    Test case:
        Enter number :
            10
    Output:
        7 5 3 2

    Test case:
        Enter number :
            100
    Output:
        97 89 83 79 73 71 67 61 59 53 47 43 41 37 31 29 23 19 17 13 11 7 5 3 2
*/
#include <stdio.h>
int isPrime(int num){
    if (num <= 1)
     
    for (int i = 2 ; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0 ;
    }
    return 1;
}
int main()
{
    int n;
    printf("Test case: \n");
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Output: \n");
    for (int i = n ; i >= 2; i--)
    {
        if (isPrime(i))
        {
            printf("%d", i) ;
            if (i != 2)
            {
                printf(" ") ;
            }
        }
    }
    return 0 ;
}