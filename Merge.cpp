//
//  Merge.cpp
//  Sorting
//
//  Created by MATTHEW S WOJNO on 1/13/15.
//  Copyright (c) 2015 Matthew Wojno. All rights reserved.
//

#include "Merge.h"

void Merge::mergeSortN(int merger[100], int low, int high){
    int mid;
    if (low < high)
    {
        mid=(low+high)/2;
        mergeSortN(merger,low,mid);
        mergeSortN(merger,mid+1,high);
        mergeN(merger,low,high,mid);
    }
    return;
}
void Merge::mergeN(int holder[100], int low, int high, int mid){
    int i, j, k, c[100];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (holder[i] < holder[j])
        {
            c[k] = holder[i];
            k++;
            i++;
        }
        else
        {
            c[k] = holder[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        c[k] = holder[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        c[k] = holder[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)
    {
        holder[i] = c[i];
    }

}

void Merge::mergeA(char jello[100], int low, int high, int mid){
    int i, j, k, c[100];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (jello[i] < jello[j])
        {
            c[k] = jello[i];
            k++;
            i++;
        }
        else
        {
            c[k] = jello[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        c[k] = jello[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        c[k] = jello[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)
    {
        jello[i] = c[i];
    }
}

void Merge::mergeSortA(char please[100], int low, int high){
    int mid;
    if (low < high)
    {
        mid=(low+high)/2;
        mergeSortA(please,low,mid);
        mergeSortA(please,mid+1,high);
        mergeA(please,low,high,mid);
    }
    return;
}



