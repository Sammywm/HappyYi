//
//  main.c
//  第十七课练习：数组01
//
//  Created by apple on 16/3/21.
//  Copyright © 2016年 Sam. All rights reserved.
//

#include <stdio.h>


typedef int *(*TYPE_FUN)(int *,int);

void    demoFunc(int *array, int num){

    for (int i =num - 1; i>=0; i--) {
        printf("-->%lu\n",sizeof(array));
    }
}

int *demoFunc3(void){

    static int array[] = {12,23,34,45,56};
    return array;

}



int main(int argc, const char * argv[]) {

#if 0
    int a = 11;
//    int b[3] = {11,22,33};
   
    int array1[3];
    //定义一个数组类型的变量，array1，没有被初始化；
    
    int array2[3] = {11,22,33};
    //定义了一个数组的变量，存放三个整型数据
    
    int array3[3] = {11,22};
    //定义了一个数组类型的变量，初始化了两个位置。
    //为初始化得值是垃圾值。
#endif


    //int array[3] = {11,22,33};
    //数组名就是数组首个元素的地址值
    
#if 0
    printf("%d\n",array[0]);
    printf("%d\n",array[2]);
    
    printf("-->%p\n",array);
    printf("-->%p\n",&array[0]);

#endif

#if 0
    printf("-->%p\n",array);
    printf("-->%p\n",array + 1);//指向的应该是数组的第二个元素的地址
    
    printf("第二个元素取出来：%d\n",array[1]);
    printf("第二个元素取出来：%d\n",*(array+1));
    printf("第三个元素取出来：%d\n",2[array]);//注意虽没报错但不能这么写
    
    
    *(array + 1) = 222;
    printf("第二个元素：%d\n",array[1]);
    array[2] = 333;
    printf("第三个元素的值:%d\n",array[2]);
    //这里是给数组元素赋值的方法，以及一般输出数组元素的格式
#endif
    
#if 0
    int array1[5] = {12,23,34,45,56};
    int array2[5];
    int *array3[5]; //数组指针，数组的元素是指针
    TYPE_FUN array4[5];
    
    printf("===>%lu\n",sizeof(array3));
    
    printf("%lu\n",sizeof(array1));
    
    int *p = array1;
    int *p2 = &array1[0];
    int (*p3)[5] = &array1;
    
    printf("p = %p\n",p);
    printf("p+1 = %p\n",p+1);

    printf("p2 = %p\n",p2);
    printf("p2+1 = %p\n",p2+1);
    
    printf("p3 = %p\n",p3);
    printf("p3+1 = %p\n",p3+1);
#endif

    //    array2 = array1;地址常量不能被赋值
    
    //    array2[4] = array1[4];
    
    
    //    array1[5] = 66;注意，数组不要越界
    //    printf("%d\n",array1[5]);
    
#if 0
    int array1[100];
    
    for (int i = 0; i<100; i++) {
        
        array1[i] = i+1;
       
    }
    
    for (int i = 99; i>=0; i--) {
         printf("%d\n",array1[i]);
    }
    //若顺序输出，可共用一个for循环，逆向输出这还需要一个for循环做输出
    
#endif

#if 0
    int num = 10;
    int array1[num]; //未初始化数组，所以输出为乱码
    
    for (int i = 0; i<9; i++) {
        
        printf("%d\n",array1[i]);
    }
#endif
    
#if 1
    int demoArray[] = {11,22,33,44,55,66,77,88,99,100};
    
    demoFunc(demoArray,10);//当数组作为函数的参数时，会退化为指针类型
#endif
    
    int meme[1000] = {0};
    for (int i = 0; i<10; i++) {
        
        int index = demoArray[i];
        meme[index] = 1;
    }
    
    if (meme[33] == 1) {
        
        
    }
    // insert code here...
   // printf("Hello, World!\n");
    return 0;
}
