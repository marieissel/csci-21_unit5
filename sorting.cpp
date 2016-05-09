/*
 * Name        : sorting.cpp
 * Author      : Marie Issel
 * Description : Working with sorting
 */
#include "sorting.h"

bool CompareArrays(int array_one[], int array_two[], unsigned int size) 
{
  for (unsigned int i = 0; i < size; i++)
    if (array_one[i] != array_two[i])
      return false;
  return true;
}

int BubbleSort(int the_array[], unsigned int size)
{
  int hold=0;
  int pass=0;
  for(int i=0; i<size-1; i++)
  {
    pass++; 
    for(int j=0; j<size-1; j++) 
    {
      if(the_array[j]>the_array[j+1])
      {
        SwapValues(the_array[j],the_array[j+1]);
      }
    }
  }
  return pass;
}

int OptimizedBubbleSort(int the_array[], unsigned int size)
{
  /*
 * Apply the optimized bubble sort algorithm to sort an array of integers.
 * @param int[] the_array - The integer array to be sorted
 * @param unsigned int size - The size of the_array
 * @return int - The number of passes the algorithm does. In this case "pass" is
 *               defined as the number of times the outside loop runs. You
 *               should increment your variable once you enter the outside loop.
 */
  int hold=0;
  int pass=0;
  bool sorted=true;
  for(int i=0; i<size-1; i++)
  {
    pass++; 
    sorted=true;
    for(int j=0; j<size-i-1; j++) 
    {
      if(the_array[j]>the_array[j+1])
      {
        sorted=false;
        hold=the_array[j];
        the_array[j]=the_array[j+1];
        the_array[j+1]=hold;
      }
    }
    if(sorted) return pass;
  }
  return pass;
}

int SelectionSort(int the_array[], unsigned int size)
{
  int pass = 0;
  int mini,temp;
  for(int r1=0;r1<size-1;r1++)
  {
    pass++;
    mini=r1;
    for(int r2=r1+1; r2<size; r2++)
      if(the_array[r2]<the_array[mini])
        mini=r2;
    if(mini !=r1)
    {
      SwapValues(the_array[r1],the_array[mini]);
    }
  }
  
  /*
 * Apply the selection sort algorithm to sort an array of integers.
 * @param int[] the_array - The integer array to be sorted
 * @param unsigned int size - The size of the_array
 * @return int - The number of passes the algorithm does. In this case "pass" is
 *               defined as the number of times the outside loop runs. You
 *               should increment your variable once you enter the outside loop.
 */
return pass+1; 
}

int InsertionSort(int the_array[], unsigned int size)
{
  int i, j, key;
  int pass = 0;
  for(j = 1; j < size; j++)
  {
    pass++; 
    key = the_array[j];
    for(i = j - 1; (i >= 0) && (the_array[i] > key); i--)
      {
        the_array[i+1] = the_array[i];
      }
    the_array[i+1] = key;
  }
  
  
  /*
 * Apply the insertion sort algorithm to sort an array of integers.
 * @param int[] the_array - The integer array to be sorted
 * @param unsigned int size - The size of the_array
 * @return int - The number of passes the algorithm does. In this case "pass" is
 *               defined as the number of times the outside loop runs. You
 *               should increment your variable once you enter the outside loop.
 */
  return pass+1;
}

int ShellSort(int the_array[], unsigned int size)
{
  int j;
  int pass = 0;
 
  for (int gap = size / 2; gap > 0; gap /= 2)
  {
    pass++;
    for (int i = gap; i < size; ++i)
    {
      int temp = the_array[i];
      for (j = i; j >= gap && temp < the_array[j - gap]; j -= gap)
      {
        the_array[j] = the_array[j - gap];
      }
      the_array[j] = temp;
    } 
  }
  
/*
 * Apply the shell sort algorithm to sort an array of integers.
 * NOTE: At the end of each iteration of the for loop you will need to call
 *       DisplayArray(the_array);
 * @param int[] the_array - The integer array to be sorted
 * @param unsigned int size - The size of the_array
 * @return int - The number of passes the algorithm does. In this case "pass" is
 *               defined as the number of times the outside loop runs. You
 *               should increment your variable once you enter the outside loop.
 */
return pass;
}

void SwapValues(int &value_1, int &value_2) 
{
  int temp = 0;
  // DO NOT ALTER THE NEXT 4 LINES!!!
  //if (GRADER) 
  {
    cout << value_1 << " " << value_2 << endl;
  }
  temp = value_1;
  value_1 = value_2;
  value_2 = temp;

}
