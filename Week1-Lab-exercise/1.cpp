
#include <iostream>
using namespace std;

/
int Language_recognizer(int n,int q0,int f,int* F,int* T,int e,char* E)
{
    char c; int i,current=q0; 
    cout<<"\n\tEnter input string : ";
    scanf("%c",&c);
    while(c!=' ' && c!='\n'){
        switch(c)
        {
            case 'a': i=0; break;
            case 'b': i=1; break;
            default: cout<<"\n\tWrong Input!"; return -1; 
        }
        current=*((T+current*e) + i); // same as current=T[current][i];
        scanf("%c",&c);
    }
    for(i=0;i<f;++i)
        if(current==F[i])
        {
            cout<<"\n\tstring accepted";
            return 0;
        }
    cout<<"\n\tstring NOT accepted";
    return 1;
}
int main()
{
    int n=4,q0=0,e=2,f=1; 
    char E[e]={'a','b'};
    int T[n][e]={{1,3},{0,2},{3,1},{2,0}},F[f]={0};
    Language_recognizer(n,q0,f,F,&T[0][0],e,E);
    return 0;
}
