// this was asked in the deliotte placement drive and i was not able to solve it in time, due to constraints like how to use 2 array.
//this was bcoz i have been using vectors from quite some time and i was not able to do basic this of coverting 2d array to vec.

// Question:
/* 
Devin has land which is a perfect square shape. He wants to try a different pattern of cultivation. He divided partitions he planned in each side of the land. Except the middle row and middle column, he cultivated the middle row cells and middle column cells so that floods will not spoil the commercial crops much. He anticipated different incomes from each cell. He maintained those income details in a table with NXN cells. His formula for total profit T from complete land = (product of income table's middle row values) * (product of income table's middle column values). When he calculated his expenditure, interestingly, he found it is exactly equal to the reverse of the total profit T. He wanted to continue the same pattern of cultivation multiple times. He needs your help in designing a program that accepts the investment he made for that tenure. Read the input from STDIN and print the output to STDOUT. Do not write arbitrary strings while reading the input or while printing the output.
Constraint: 1 < N <= 25 (N is always an odd number)
Input Format: The first line of input contains an integer, N, where N is the number of partitions he planned in each side of the land. The next N lines have N integers, each separated by a single white space.
Output Format: The output contains the total profit T.
Sample Input 1:
2
3 5
1 1
Sample Output 1:
15

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> arr={{1,2,3},{4,5,6},{7,8,9}};
    int len = arr.size();//this is used for no of row, but we will be taking n x n matrix, so use this or col one
    int sum =0;
    //taking out middle row
    vector<int> arr1;
    int mid = (len/2);
    for(int i = 0;i<len;i++){
        arr1.push_back(arr[mid][i]);
    }

    vector<int> arr2;
    for(int i =0;i<len;i++){
        arr2.push_back(arr[i][mid]);
    }
    int sumWithoutRev =0;
    
    int p1 = 1;
    int p2 = 1;//product 1 and product 2
    
    for(int i =0;i<len;i++){
        p1 *= arr1[i];
    }
    
    for(int i =0;i<len;i++){
        p2 *= arr2[i];
    }
    cout<<p1<<" "<<p2;cout<<endl;
    sumWithoutRev = p1 + p2;
    
    // cout<<sumWithoutRev;
    while(sumWithoutRev>0){
        
        sum += sumWithoutRev%10;//pick last digit put in front
        sumWithoutRev/=10;
    }
    
    cout<<sum;
    return 0;

}