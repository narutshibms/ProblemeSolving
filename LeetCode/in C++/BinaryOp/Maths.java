import java.util.Scanner;


class Tree {

        int data;
        Tree right;
        Tree left;
        

        Tree(int data){
                this.data = data;
                right = left = null;    
                
        }

  
        void Display(Tree node){
                
                if(node != null){
                
                        System.out.println(node.data);
                        Display(node.left);
                        Display(node.right);
                }

        }
        Tree Inserstion(Tree node , Tree root){
                
                if( root != null){

                if(node.data >= root.data)
                root.right = Inserstion(node, root.right);       
                    
                else 
                root.left  = Inserstion(node, root.left);            
                    
                }
                else return node;

         return root;
        }
        Tree BreathFirst(Tree root , int height){
        
        if(root==null)return root;

        else if(height == 0)
        System.out.print( " data = " + root.data);
        

        else {
                BreathFirst(root.left, height-1);

                BreathFirst(root.right, height-1);
        }
        return root;
        }


int hieght(Tree root){
        
        if(root == null)
         return 0;


        int r = hieght(root.right);                
        int l = hieght(root.left);                
        
        
        return Math.max(r, l) +1;

        }
};


public class Maths {

        public static void main(String[] args) {
               
        Tree root = new Tree(18);
                
        Tree node1 = new Tree(20);

        Tree node2 = new Tree(17);

        Tree node3 = new Tree(19);
         
        Tree node4 = new Tree(15);

        Tree node5 = new Tree(14);

        root.Inserstion(node1, root);
        
        root.Inserstion(node2, root);

        root.Inserstion(node3, root);
        
        root.Inserstion(node4, root);

        root.Inserstion(node5, root);
        
        //root.BreathFirst(root, 3);

        System.out.println(root.hieght(root));
                 
         
         
       

        }

}
