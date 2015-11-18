//
//  main.cpp
//  Sorting
//
//  Created by MATTHEW S WOJNO on 1/6/15.
//  Copyright (c) 2015 Matthew Wojno. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <vector>
#include <string>
#include "QuickSort.h"
#include "Merge.h"

using namespace std;

int arrange[100];
char sort1[100];
int use[100];
char user[100];
int mergeIt[100];
char merger[100];
double startTime;
double endTime;
int response, response1;
void setArrays();
void insertionSortN(int[]);
void insertionSortA(char[]);
void mergeSortN(int[]);
void mergeSortA(char[]);
void quickSortN(int,int);
int partitionN(int, int);
void quickSortA(char[],int,int);
int partitionA(int[], int,int);
void shellSortN(int[]);
void shellSortA(char[]);
void selectionSortN(int[]);
void selectionSortA(char[]);

int main(){
    cout<<"Would you like to sort alphabetically or numerically?"<<endl;
    cout<<"Enter 1 for numerically"<<endl;
    cout<<"Enter 2 for alphabetically"<<endl;
    cin>> response;
    
    setArrays();
    
    cout<<endl<<endl<<"How would you like it to be sorted?"<<endl;
    cout<<"Enter 1 for insertion sort"<<endl;
    cout<<"Enter 2 for merge sort"<<endl;
    cout<<"Enter 3 for quick sort"<<endl;
    cout<<"Enter 4 for shell sort"<<endl;
    cout<<"Enter 5 for selection sort"<<endl;
    cin>>response1;
    
    if(response1 == 1){
        if(response == 1){
            clock_t begin = clock();
        insertionSortN(arrange);
            clock_t end = clock();
            
            cout<<endl<<"Time it took: "<<(end-begin);
        }
        if(response == 2){
            clock_t begin = clock();
            insertionSortA(sort1);
            clock_t end = clock();
            
            cout<<endl<<"Time it took: "<<(end-begin);
        }
    }
    
    if(response1 == 5){
        if(response == 1){
            clock_t begin = clock();
            selectionSortN(arrange);
            clock_t end = clock();
    
            cout<<endl<<"Time it took: "<<(end-begin);
        }
        if(response == 2){
            clock_t begin = clock();
            selectionSortA(sort1);
            clock_t end = clock();
            
            cout<<endl<<"Time it took: "<<(end-begin);
        }
    }
    
    if(response1 == 3){
        if(response == 1){
            clock_t begin = clock();
            QuickSort call;
            call.partitionN(use,0,100);
            call.quickSortN(use, 0, 100);
           clock_t end = clock();
            cout<<endl<<"Sorted array: ";
           
            for(int u = 100; u>0; u--){
            cout<<use[u]<< " ";
               
            }
             cout<<endl<<"Time it took: "<<(end-begin);
        }
        if(response == 2){
             clock_t begin = clock();
            QuickSort call;
            call.quickSortA(user, 0, 100);
            call.partitionA(user, 0, 100);
             clock_t end = clock();
            cout<<endl<<"Sorted array: ";
            for(int u = 100; u>0; u--){
                cout<<user[u]<< " ";
            }
            cout<<endl<<"Time it took: "<<(end-begin);
        }
        
    }
    
    if(response1 == 2){
        if(response == 1){
            clock_t begin = clock();
            Merge call;
            call.mergeSortN(mergeIt, 0, 100);
            call.mergeN(mergeIt, 0, 100, 50);
            clock_t end = clock();
            cout<<endl<<"Sorted array: ";
            for(int t = 0; t<100; t++){
                cout<<mergeIt[t]<<" ";
            }
            cout<<endl<<"Time it took: "<<(end-begin);
        }
        if(response == 2){
            clock_t begin = clock();
            Merge call;
            call.mergeSortA(merger, 0, 100);
            call.mergeA(merger, 0, 100, 50);
            clock_t end = clock();
            cout<<endl<<"Sorted array: ";
            for(int q = 0; q<100; q++){
                cout<<merger[q]<<" ";
            }
            cout<<endl<<"Time it took: "<<(end-begin);
        }
    }
    
    if(response1 == 4){
        if(response == 1){
            clock_t begin = clock();
            shellSortN(arrange);
            clock_t end = clock();
            cout<<endl<<"Time it took: "<<(end-begin);
        }
        if(response == 2){
            clock_t begin = clock();
            shellSortA(sort1);
            clock_t end = clock();
            cout<<endl<<"Time it took: "<<(end-begin);
        }
    }
     
}

void setArrays(){
    
    srand(time(NULL));
    
    cout<<"Array to be sorted: "<<endl;
    
    if(response == 1){
        for(int i = 0; i<100; i++){
            arrange[i] = (rand() %100)+1;
            use[i] =(rand() %100)+1;
            mergeIt[i] =(rand() %100)+1;
        }
        
        for(int b = 0; b<100; b++){
            cout<<arrange[b]<<" ";
        }
    }
    
    if(response == 2){
        for(int c = 0; c<100; c++){
            sort1[c] = (rand()%(90-65))+65;
            user[c] = (rand()%(90-65))+65;
            merger[c] = (rand()%(90-65))+65;
        }
        for(int v = 0; v<100; v++){
            cout<<sort1[v]<<" ";
        }
        
        
    }
}

void insertionSortN(int hello[100]){
    int hold, change;
    
    for (int i = i; i < 100; i++){
        hold = i;
        
        while (hold > 0 && hello[hold] < hello[hold-1]){
            change = hello[hold];
            hello[hold] = hello[hold-1];
            hello[hold-1] = change;
            hold--;
        }
    }
        cout<<endl<<"Sorted array: ";
    for(int y = 0; y<100; y++){
        cout<<hello[y] <<" ";
    }
        
}
    
void insertionSortA(char other[100]){
    int hold, change;
    
    for (int i = i; i < 100; i++){
        hold = i;
        
        while (hold > 0 && other[hold] < other[hold-1]){
            change = other[hold];
            other[hold] = other[hold-1];
            other[hold-1] = change;
            hold--;
        }
    }
    cout<<endl<<"Sorted array: ";
    for(int y = 0; y<100; y++){
        cout<<other[y] <<" ";
    }

}

void selectionSortA(char other[100]){
    //pos_min is short for position of min
    int min,temp;
    
    for (int i=0; i < 100-1; i++)
    {
        min = i;//set pos_min to the current index of array
        
        for (int j=i+1; j < 100; j++)
        {
            if (other[j] < other[min])
            {
                //pos_min will keep track of the index that min is in, this is needed when a swap happens
                min = j;
            }
        }
        
        //if pos_min no longer equals i than a smaller value must have been found, so a swap must occur
        if (min != i)
        {
            temp = other[i];
            other[i] = other[min];
            other[min] = temp;
        }
    }
   cout<<endl<<"Sorted array: ";
    for(int you = 0; you<100; you++){
        cout<<other[you]<< " ";
    }
}

void selectionSortN(int hello[100]){
    //pos_min is short for position of min
    int min,temp;
    
    for (int i=0; i < 100-1; i++)
    {
        min = i;//set pos_min to the current index of array
        
        for (int j=i+1; j < 100; j++)
        {
            if (hello[j] < hello[min])
            {
                //pos_min will keep track of the index that min is in, this is needed when a swap happens
                min = j;
            }
        }
        
        //if pos_min no longer equals i than a smaller value must have been found, so a swap must occur
        if (min != i)
        {
            temp = hello[i];
            hello[i] = hello[min];
            hello[min] = temp;
        }
    }
    cout<<endl<<"Sorted array: ";
    for(int you = 0; you<100; you++){
        cout<<hello[you]<< " ";
    }
}

void shellSortN(int hello[100]){
    
    int i, temp, flag = 1;
    int d = 100;
    while( flag || (d > 1))      // boolean flag (true when not equal to 0)
    {
        flag = 0;           // reset flag to 0 to check for future swaps
        d = (d+1) / 2;
        for (i = 0; i < (100 - d); i++)
        {
            if (hello[i + d] > hello[i])
            {
                temp = hello[i + d];      // swap positions i+d and i
                hello[i + d] = hello[i];
                hello[i] = temp;
                flag = 1;                  // tells swap has occurred
            }
        }
    }
    cout<<endl<<"Sorted array: ";
    for(int you = 100; you>0; you--){
        cout<<hello[you]<< " ";
    }

}

void shellSortA(char other[100]){
    
    int i, temp, flag = 1;
    int d = 100;
    while( flag || (d > 1))      // boolean flag (true when not equal to 0)
    {
        flag = 0;           // reset flag to 0 to check for future swaps
        d = (d+1) / 2;
        for (i = 0; i < (100 - d); i++)
        {
            if (other[i + d] > other[i])
            {
                temp = other[i + d];      // swap positions i+d and i
                other[i + d] = other[i];
                other[i] = temp;
                flag = 1;                  // tells swap has occurred
            }
        }
    }
    cout<<endl<<"Sorted array: ";
    for(int you = 100; you>0; you--){
        cout<<other[you]<< " ";
    }
    
}