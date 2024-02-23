#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *next;
	struct node *pre;
	node(int t_data)
	{
		data=t_data;
		pre=NULL;
		next=NULL;
	}
};
class D_Link_List{
	struct node *head;
	public:
	  D_Link_List() {
        head = NULL;
    }
	add_node(int t_data){
		struct node *newnode = new node(t_data);
		if(!head){
			head=newnode;
		}
		else
		{
			struct node *curr=head;
			struct node *pre;
			while(curr->next!=NULL)
			{
				curr=curr->next;
			}
			newnode->pre=curr;
			curr->next=newnode;
			
		}
	}
	show()
	{
		struct node* curr = head;
		cout<<"Traveser with Current node..."<<endl;
		while(curr!=NULL)
		{
			cout<<"Data:"<<curr->data<<endl;
			curr=curr->next;
		}
		cout << "Traverser with previous node..." << endl;
        struct node* curr2 = head;
        while (curr2->next != NULL) {
            curr2 = curr2->next;
        }
        while (curr2 != NULL) {
            cout << "Data:" << curr2->data << endl;
            curr2 = curr2->pre;
        }
		
	}
};
main()
{
	D_Link_List l1;
	l1.add_node(10);
	l1.add_node(20);
	l1.add_node(30);
	l1.add_node(40);
	l1.add_node(50);
	l1.show();
}
