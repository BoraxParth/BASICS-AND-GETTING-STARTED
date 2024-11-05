# AIM
To use linked list in c++.

# Problem Statement 
1.) To create a node in c++.

2.) To add node in c++.

# Theory 
n C++, a linked list is a linear data structure that allows the users to store data in non-contiguous memory locations. A linked list is defined as a collection of nodes where each node consists of two members which represents its value and a next pointer which stores the address for the next node. In this article, we will learn about the linked list, its implementation, and its practical applications.

# Problem Code 

```javascript
//Parth Borikar
//23070123096

//NODES
#include<iostream>
using namespace std;
class Link{
    public:
    int data ;
    Link* next;
    Link(int num){
        data = num;
        next = NULL;
    }
};
int main(){
    Link* l1 = new Link(6);
    cout << l1->data<<"   "<<l1->next;

}

//ADDING NODES
#include<iostream>
using namespace std;
class Link{
    public:
    int data ;
    Link* next;
    Link(int num){
        data = num;
        next = NULL;
    }
};
void insert_head(Link* &head, int data){
    Link* new_node = new Link(data);
    new_node -> next= head;
    head = new_node;
}
void disp(Link*head){
    Link*temp = head;
    while (temp!= NULL){
        cout<<temp->data<<"->";
        temp = temp->next;

    }
    cout<<"NULL"<<endl;
}

int main(){
    Link*head = NULL;
    insert_head(head, 30);
    disp(head);
    insert_head(head, 32);
    disp(head);
    insert_head(head,35);
    disp(head);
    
}
```

# Output

1.) NODES

![image](https://github.com/user-attachments/assets/41d79a51-b1c1-427c-b290-5fa003d75069)


2.) ADDING NODES
![image](https://github.com/user-attachments/assets/e9a865eb-4773-4106-9604-dababbd44ea0)

# Conclusion

We learnt to create nodes and adding nodes in c++.


