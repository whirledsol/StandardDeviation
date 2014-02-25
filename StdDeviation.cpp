//
//  StdDeviation.cpp
//  
//
//  Created by Will Rhodes on 2/25/14.
//
//

#include "StdDeviation.h"


int main(){
    
        int inputLength;
        int values[9000];
        populateArray(values,inputLength);
        double stdD,mean;
        findStdDeviation(values,inputLength,mean,stdD);
        outputData(values,inputLength,mean,stdD);
    
    
    
}

