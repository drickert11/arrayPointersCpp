#include <iostream>
using namespace std;

int main()
{
    int my_ints[4];
    for(int x=0;x<4;x++){
        cout << "Please enter a value: "<<endl;
        cin >> my_ints[x];
    }
        
    int *my_ptrs[4];
        
    for(int x=0;x<4;x++){
        my_ptrs[x] = &my_ints[x];
    }
    
    int *hold;
    
    for(int a= 0; a<4;a++){
            for (int b=a; b<4;b++){
                if(*my_ptrs[a]>*my_ptrs[b]){
                 hold=my_ptrs[b];
                 my_ptrs[b]=my_ptrs[a];
                 my_ptrs[a]=hold;
                }
                
            }
    }
    cout<< "my_ints: ";
    for(int c=0; c<4;c++){
        cout<<my_ints[c]<<endl;
    }
    
    cout<< "my_ptrs: ";
    for(int d=0; d<4;d++){
        cout<<*my_ptrs[d]<<endl;
    }
    return 0;
}