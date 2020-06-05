#import some package
#Tree Algoritham in Python

class Node:
    def __init(self,val):
        self.childleft = None
        self.childright = None
        self.nodedata = val


# Creating instance of the node class
root = Node(1)
root.childleft = Node(2)
root.childright = Node(3)
root.childleft.childleft = Node(4)
root.childleft.childright = Node(5)


#Inorder Traversal Function

def InOrd(root):
    if root:
        InOrd(root.childleft)
        print(root.nodedata)
        InOrd(root.childright)

Inord(root)        

#Preorder Traversal Function

def PreOrd(root):
    if root:
        print(root.nodedata)
        PreOrd(root.childleft)
        PreORd(root.childright)

PreOrd(root)




#Postorder Traversal Function

def PostOrd(root):
    if root:
        PostOrd(root.childleft)
        PostOrd(root.childright)
        print(root.nodedata)

PostOrd(root)
        




    
        
