#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int *arr(int a);
int IntTransformation(int *nums, int digits);
int digit(int x);
double median(int nums1[], int nums1Size, int nums2[], int nums2Size);
int IntTransformation(int *nums, int digits){
    int number = 0;
    for(int i = 0; i < digits - 1; i++){
        number = (number + nums[i] * pow(10, (digits - (i + 1))));
    }
    number /= 10;
    return number;
}
int *arr(int a){
    int digits;
    int *arr;
    int a1 = a;
    digits = digit(a1);
    arr = malloc(sizeof(int) * (digits - 1));
    for(int j = 0; j < (digits - 1); j++){
        arr[j] = 0;
    }
    for(int i = 0; i < (digits); i++){
        arr[i] = a1 / (pow(10, (digits - (i + 1))));
        a1 = a1 - arr[i] * pow(10, (digits - (i + 1)));
    }
    return arr;
}
int digit(int x){
    int b = 0, a1 = x;
    while(a1 > 0){
        a1 = a1 / 10;
        b++;
    }
    return b;
}
int *nonRepeat(int size){
    srand(time(NULL));
    int *list;
    bool x = false;
    list = malloc(sizeof(int) * size);
    if(list == NULL){
        printf("Failed to allocate memory!\n");
        return NULL;
    }
    int random;
    list[0] = rand() % size;
    for(int i = 1; i < size; i++){
        random = rand() % size;
        for(int j = 0; j < i; j++){
            if(list[j] == random){
                x = true;
                break;
            }
        }
        if(x){
            i--;
        }
        else{
            list[i] = random;
        }
        x = false;
    }
    return list;
}
double median(int nums1[], int nums1Size, int nums2[], int nums2Size){
  int s = nums1Size + nums2Size, nums3[s], i = 0, i1 = 0, temp;
  double median, t, add, F;
  while(i < nums1Size){
    nums3[i] = nums1[i];
    i++;
  }
  while(i < s){
    nums3[i] = nums2[i1];
    i1++;
    i++;
  }
  for(int j = 0; j < s - 1; j++){
    for(int k = 0; k < s - 1; k++){
      if(nums3[k] > nums3[k + 1]){
        temp = nums3[k];
        nums3[k] = nums3[k + 1];
        nums3[k + 1] = temp;
      }
    }
  }
  t = s / 2;
  switch(s % 2){
    case 0:
      if(nums1Size == 0 || nums2Size == 0){
        F = nums3[(int)t] + nums3[(int)(t - 1)];
      }
      else{
        F = ((nums3[(int)(t - add - 1)] + nums3[(int)(t + add)]));
      }
      if(floor(t) < t && ceil(t) > t){
        add = 0.5;
      }
      else{
        add = 0;
      }
      median = F / 2;
      break;
    case 1:
      median = nums3[(nums1Size + nums2Size) / 2];
      break;
  }
  return median;
}