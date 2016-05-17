#include <iostream>

using namespace std;

int main()
{


    int m, n;
    cout << "Enter number of rows: " ;
    cin >> m;
    cout << endl;
    cout << "Enter number of columns: " ;
    cin >>n;
    cout << endl;

    int a[m][n], b[n][m];
    for (int i=0; i<m; i++)
    {
      for (int j=0; j<n; j++)
      {
         a[i][0]=0;
       if (i+1>=j)
       {
           a[i][j]=1;
       }
       else a[i][j]=0;
      }

    }


    for (int i=0; i<m; i++)
    {
      for (int j=0; j<n; j++)
      {
       cout << a[i][j];
      }
     cout <<endl ;
    }



    for (int i=0; i<m; i++)
    {
      for (int j=0; j<n; j++)
      {
       b[j][m-1-i]= a[i][j];
      }
     cout <<endl ;
    }



    for (int i=0; i<n; i++)
    {
      for (int j=0; j<m; j++)
      {
       cout << b[i][j];
      }
     cout <<endl ;
    }





    return 0;
}

