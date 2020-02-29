#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dataGrab(int);

int main(void) {

  int numberSet;

  srand(time(NULL));

  printf("How many numbers do you want to sort: ");
  scanf("%d", &numberSet);

  dataGrab(numberSet);
  
  return 0;
}

int dataGrab(numSet) {
  int dataVals[numSet];
  int sortCount; //# of sorts, worst-case-scenario for bubble sort is O(n^2)
  int tmp = numSet;
  int swapStore1,swapStore2;
  int a = 0;
  int b = 1;

  printf("how many sorts: ");
  scanf("%d", &sortCount);

  //assigning random values to each location in the array
  for(int i = 0 ; i != numSet ; i++)
  {
    dataVals[i] = rand() % 50;
  }

  //This code prints the whole array
  printf("STARTING VALUES:\n");
  for(int i = 0 ; i != numSet ; i++) 
  {   
    printf("%d ", dataVals[i]);
    if (i == numSet - 1) 
    {
      printf("\n");
    }
  }
  printf("_____________________________________\n");

  //This code is the actual bubble sort algorithm
  for(int i = 0; i != sortCount ; i++) 
  { 
    a = 0;
    b = 1;

    //selects the first 2 vals in dataVals, compares and switches if a>b
    for(int i = 0; i != numSet ; i++, a++, b++) 
    {
      //need this so final insert of dataval is numset - 1
      if(b == sortCount) {}
      
      else 
      {
        swapStore1 = dataVals[a];
        swapStore2 = dataVals[b];

        if(dataVals[a] > dataVals[b]) 
        {
          dataVals[b] = swapStore1;
          dataVals[a] = swapStore2;
        }

      }
    }

    //prints each iteration of sorting
    for(int i = 0 ; i != numSet ; i++) 
    { 
      printf("%2d ", dataVals[i]);
      if (i == numSet - 1) {
        printf("\n");
      }
    }
    
  }

  //prints the final sorted values
  printf("ENDING VALUES:\n");
  for(int i = 0 ; i != numSet ; i++) 
  { 
    printf("%d ", dataVals[i]);
    if (i == numSet - 1) 
    {
      printf("\n");
    }
  }

  return 0;
}
