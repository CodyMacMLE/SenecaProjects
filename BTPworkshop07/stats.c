#include <stdio.h>
#include <math.h>
#include "stats.h"

float get_max(float *array, int size){
  float max = array[0];
  for (size_t i = 1; i < size; i++)
  {
    if (array[i] > max){
      max = array[i];
    }
  }
  return max;
}

float get_min(float *array, int size){
  float min = array[0];
  for (size_t i = 1; i < size; i++)
  {
    if (array[i] < min){
      min = array[i];
    }
  }
  return min;
}

float get_mean(float *array, int size){
  float sum;
  float mean;
  for (int i = 0; i < size; i++)
  {
    sum += array[i];
  }
  mean = sum/size;
  
  return mean;
}

float get_std(float *array, int size){
  float std;
  float summation;
  float mean = get_mean(array, size);
  for (size_t i = 0; i < size; i++)
  {
    summation += pow((array[i] - mean),2);
  }
  std = sqrt(summation/size);

  return std;
}

struct stats get_stats(float *array, int size){
  struct stats temp;
  size = size;
  temp.max = get_max(array, size);
  temp.min = get_min(array, size);
  temp.mean = get_mean(array, size);
  temp.std = get_std(array, size);

  return temp;
}