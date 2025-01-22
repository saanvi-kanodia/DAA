#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
    bool val;
    int num = 0, i = 0, u_limit = 0;
    cout<<"Enter the n value for viewing all combinations of True and False: ";
    cin>>num;

    u_limit = pow(2, num);

    bool mat[u_limit][num];
    int b_limit = 1;
    int r_limit = u_limit;

        for(int col = 0; col<num; col++){
             i=0, val = true;
            for(int reps = 0; reps< r_limit; reps++){
                for(int bunch = 0; bunch<b_limit; bunch++){
                  mat[i][col] = val;
                  i++;
                }
                val = !val;
            }
            b_limit = b_limit* 2;
            r_limit = u_limit/b_limit;
        }

        cout<<"Number of combinations: "<<u_limit<<endl<<"Below are the combinations:"<<endl;

        for(int x=0; x<u_limit; x++){
            cout<<endl;
            for(int y=num-1; y>=0; y--){
                cout<<mat[x][y]<<" ";
            }
        }
    cout<<endl;
    return 0;
}
