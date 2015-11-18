//
//  QuickSort.cpp
//  Sorting
//
//  Created by MATTHEW S WOJNO on 1/13/15.
//  Copyright (c) 2015 Matthew Wojno. All rights reserved.
//

#include "QuickSort.h"

void QuickSort::quickSortN(int quick[100],int top, int bottom){
    int middle;
    if (top < bottom)
    {
        middle = partitionN(quick, top, bottom);
        quickSortN(quick, top, middle);   // sort first section
        quickSortN(quick, middle+1, bottom);    // sort second section
    }
    return;
}


int QuickSort::partitionN(int sort[100], int top, int bottom){
    int x = sort[top];
    int i = top - 1;
    int j = bottom + 1;
    int temp;
    do
    {
        do
        {
            j--;
        }while (x >sort[j]);
        
        do
        {
            i++;
        } while (x <sort[i]);
        
        if (i < j)
        {
            temp = sort[i];
            sort[i] = sort[j];
            sort[j] = temp;
        }
    }while (i < j);
    return j;           // returns middle subscript

}

void QuickSort::quickSortA(char sort[100], int top, int bottom){
    int middle;
    if (top < bottom)
    {
        middle = partitionA(sort, top, bottom);
        quickSortA(sort, top, middle);   // sort first section
        quickSortA(sort, middle+1, bottom);    // sort second section
    }
    return;
}

int QuickSort::partitionA(char you[100], int top, int bottom){
    int x = you[top];
    int i = top - 1;
    int j = bottom + 1;
    int temp;
    do
    {
        do
        {
            j--;
        }while (x >you[j]);
        
        do
        {
            i++;
        } while (x <you[i]);
        
        if (i < j)
        {
            temp = you[i];
            you[i] = you[j];
            you[j] = temp;
        }
    }while (i < j);
    return j;           // returns middle subscript
}



