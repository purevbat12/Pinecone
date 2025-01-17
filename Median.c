#include <stdio.h>
#include <math.h>
double findMedianSortedArrays(int nums1[], int nums1Size, int nums2[], int nums2Size) {
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
int main(){
    int arr1[] = {}, arr2[] = {2, 3}, size1 = sizeof(arr1) / sizeof(int), size2 = sizeof(arr2) / sizeof(int);
    //findMedianSortedArrays(arr1, size1, arr2, size2);
    printf("%lf", findMedianSortedArrays(arr1, size1, arr2, size2));
    return 0;
}