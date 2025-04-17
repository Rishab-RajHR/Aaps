#include <iostream>
using namespace std;

int main(){
  // Array Examples
    int marks[] = {23, 45, 56, 89};
    
    int mathMarks[4];
    mathMarks[0] = 234;
    mathMarks[1] = 376;
    mathMarks[2] = 456;
    mathMarks[3] = 564;

    cout<<"These are Math marks"<<endl;;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;

    cout<<"These are marks"<<endl;
    
    for(int i = 0; i < 4; i++)
    {
         cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }
    return 0;
}