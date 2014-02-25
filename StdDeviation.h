//
//  StdDeviation.h
//  
//
//  Created by Will Rhodes on 2/25/14.
//
//

#ifndef ____StdDeviation__
#define ____StdDeviation__

#include <iostream>
void populateArray(int array[], int& inputLength);
void findStdDeviation(int array[],int inputLength,double& mean,double& stdD);
void outputData(int array[],int inputLength, double mean,double stdD);
void populateArrayFromFile(int array[], int& inputLength);
#endif /* defined(____StdDeviation__) */
