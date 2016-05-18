//
//  API.c
//  第十七课练习：数组01
//
//  Created by apple on 16/3/21.
//  Copyright © 2016年 Sam. All rights reserved.
//

#include "API.h"

int findMax(int *array,int num){

    int *tmp;
    for (int i = 0; num > i; i++) {
       
        if (array[num]>array[num - 1]) {
            *tmp = array[num];
            
        }
    }return *tmp;

}


//int beThere(int *arry,int num,int target){
//
//
//
//
//
//}



void sort(int *array,int num){ //排序
    
    for (int i=0; i<num; i++) {
        if (array[0]>array[i]) {
            int temp;
            temp = array[0];
            array[0] = array[i];
            array[i] = temp;
            printf("%d\n",array[0]);
        }

    }
}