//Q: maximum 1s row with sorted 2D array;

#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;
int maximumOnesRow(vector<vector<int>>&matrix)
{
    int maxonces = INT_MIN;
    int maxOncesRow = -1;// why max onces row is -1 because if no 1 is present in whole 2d array then it will be return -1 by default;
    int column = matrix[0].size();//this " matrix[0].size(); " the way of to write the column of the size;
    for(int i= 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < column; j++)
        {
            if(matrix[i][j]==1)
            {
                int numberOfOnce = column - j; //j represent column index values and Remaining 1s from current position to the end of the row;
                if(numberOfOnce > maxonces)
                {
                    maxonces = numberOfOnce; //updating maxonces to compair the next upcoming values and  Update max 1s count
                    maxOncesRow = i; // i will updating row with the most 1s
                }
                break;
            }
            
        }
        
    }
    return maxOncesRow;
}
int main()
{
    int n,m;
    cout<<"Enter the size of row and column."<<endl;
    cin>>n>>m;
    vector<vector<int>>matrix(n,vector<int>(m));
    cout<<"Enter the elements."<<endl;
    for(int i=0; i< matrix.size(); i++)
    {
        for(int j =0; j < matrix[0].size(); j++)
        {
            cin>>matrix[i][j];
        }
    }
    int ans= maximumOnesRow(matrix);
    cout<<"Max onces Row is "<<ans<<endl;
    return 0;
}
