#include<iostream>
#include<vector>
using namespace std;

vector<vector<int> >CreateSpiralMatrix(int n)
{
   vector<vector<int > > matrix(n, vector<int>(n));
    int left = 0;
    int right = matrix[0].size()-1;
    int top = 0;
    int bottom = matrix.size()-1;
    int direction = 0;
    int valuse = 1;
    while(left<=right && top <= bottom)
    {
        //left to right
        if(direction == 0)
        {
            for(int col = left; col <= right; col++)
            {
                matrix[top][col]=valuse++;
            }
            top++;
        }
        else if(direction == 1)
        {
            for(int row = top ; row<= bottom; row++ )
            {
                matrix[row][right]=valuse++;
            }
            right--;
        }
        else if(direction == 2)
        {
            for(int col = right; col >= left; col--)
            {
                matrix[bottom][col]=valuse++;
            }
            bottom--;
        }
        else
        {
            for(int row = bottom; row >= top ; row--)
            {
                matrix[row][left]= valuse++;
            }
            left++;
        }
        direction = (direction + 1) % 4;
    }
    return matrix;
}
int main()
{
    int n;
    cout<<"Enter the size of matrix. "<<endl;
    cin>>n;
    vector<vector<int>>matrix(n,vector<int>(n));
    matrix= CreateSpiralMatrix( n);
    for(int i = 0; i< matrix.size(); i++ )
    {
        for(int j = 0; j< matrix[0].size(); j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}