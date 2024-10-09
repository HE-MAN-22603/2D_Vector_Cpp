#include<iostream>
#include<vector>
using namespace std;
void spiralMatrix(vector<vector<int>>&matrix)
{
    int left = 0;
    int right = matrix[0].size()-1;
    int top = 0;
    int bottom = matrix.size()-1;
    int direction = 0;
    while(left<=right && top <= bottom)
    {
        //left to right
        if(direction == 0)
        {
            for(int i = left; i <= right; i++)
            {
                cout<<matrix[top][i]<< " ";
            }
            top++;
        }
        else if(direction == 1)
        {
            for(int j = top ; j<= bottom; j++ )
            {
                cout<<matrix[j][right]<<" ";
            }
            right--;
        }
        else if(direction == 2)
        {
            for(int i = right; i >= left; i--)
            {
                cout<<matrix[bottom][i]<<" ";
            }
            bottom--;
        }
        else
        {
            for(int j = bottom; j >= top ; j--)
            {
                cout<<matrix[j][left]<<" ";
            }
            left++;
        }
        direction = (direction + 1) % 4;
    }
    return;
}
int main()
{
    int n, m;
    cout<<"Enter the size of matrix. "<<endl;
    cin>>n>>m;
    vector<vector<int>>matrix(n,vector<int>(m));
    cout<<"Enter the elements."<<endl;
    for(int i = 0; i< matrix.size(); i++ )
    {
        for(int j = 0; j<matrix[0].size(); j++)
        {
            cin>>matrix[i][j];
        }
    } 
    cout<<"Original Matrix:"<<endl;
    for(int i = 0; i< matrix.size(); i++ )
    {
        for(int j = 0; j<matrix[0].size(); j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    } 
    cout<<"Spiral Matrix is : ";   
    spiralMatrix(matrix);
    return 0;
}  

hjkj