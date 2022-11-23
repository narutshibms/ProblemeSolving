#include <iostream>

using namespace std;

class tree
{

public:
    short val;

    tree *left;
    tree *right;

    tree(int v)
    {
        val = v;
        left = right = nullptr;
    }
};

tree *creat(int v)
{

    tree *node = new tree(v);
    return node;
}

tree *setter(tree *root, int v, int lv, int rv)
{

    root = creat(v);
    root->left = creat(lv);
    root->right = creat(rv);

    return root;
}

void display(tree *root)
{

    if (root)
    {
        display(root->left);
        cout << "  " << root->val << " ";
        display(root->right);
    }
}

int FindClose(tree *root, int target)
{

    if (root)
    {

        if (root->val > target)
          target =   FindClose(root->left, target);
        else if (root->val < target)
          target =  FindClose(root->right, target);
           if(root->left==nullptr)
          return root->val;
    }
        
return target;
}

void sumOfbranch(tree * root,int su){

    if(root){

        su +=root->val;

        sumOfbranch(root->left,su);
          
        sumOfbranch(root->right,su);
        
        if(root->left == root->right)
        cout<<"["<<su<<"]"<<endl;

        su -= root->val;
        
    }
 

}
int main()
{
    tree *root;
    root = setter(root, 10, 7, 15);
    root->left = setter(root->left, 7, 4, 9);

    root->right = setter(root->right, 15, 13, 17);
    root->right->left = setter(root->right->left,13,10,14);

    display(root);

    int s(0);
    sumOfbranch(root,s);
    return 0;
}