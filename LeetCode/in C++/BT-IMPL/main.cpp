#include <iostream>
using namespace std;

class Binary{

public : 

    int data;
    Binary *right ; 
    Binary *left ;

    Binary(int info ){ data = info; right = left = nullptr;   }
};


Binary * insert( Binary *p , int data){

     if(!p) p  = new Binary(data);
     
     else if( data > p->data )
       p->right =  insert(p->right,data) ; 
     else 
       p->left =  insert(p->left,data) ; 
        
   

return p;

    }

void PrintBinary(Binary * root){

  if(root){

    cout<<" "<<root->data;
    PrintBinary(root->left);
    PrintBinary(root->right);

  }

}    


int counter = 0 ;

int GetNleaf(Binary *root){
 
 if( root ){
    if( root->left == root->right )
     ++counter;
    GetNleaf(root->left);
    GetNleaf(root->right);
 }

return counter;
}
int main(){
    
        Binary *root = nullptr;
        
       root = insert(root,10);
        insert(root,12);
        insert(root,15);
        insert(root,8);
        insert(root,5);
        insert(root,9);
        insert(root,120);
        insert(root,17);

     PrintBinary(root);
    
    cout<<"\n number of leaf in this tree is : "<<GetNleaf(root);
    
    return 0;
}