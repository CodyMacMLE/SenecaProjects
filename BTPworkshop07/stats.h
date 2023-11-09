#ifndef STATS_H
#define STATS_H
#define SIZE 8

struct stats{
  int size;
  float max;
  float min;
  float mean;
  float std;
};

/**
 * All Functions bellow will take an array with type float
 * and an array size of type integer
 * 
*/
float get_max(float array[], int size);
float get_min(float array[], int size);
float get_mean(float array[], int size);
float get_std(float array[], int size);
float get_stats(float array[], int size);

#endif