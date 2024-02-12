#include<iostream>
using namespace std;
struct node{
	int data;
	struct node* next;
	node(int t_data)
	{
		data = t_data;
		next = NULL;
	}
};
class linklist{
	struct node* head;
	public:
		add_list(int t_data){
			struct node*newnode = new node(t_data);
			 
			if(!head){
				head=newnode;
			}
			else{
			struct node*current = head;
			while(current->next){
				current = current->next;
			}	
			current->next = newnode;
			newnode->next=head;
			}	
		}
		b_add_list(int t_data){
			struct node*newnode = new node(t_data);
			newnode->next=head;
			head=newnode;	
		}
void m_add_list(int t_data, int t_idata) {
    struct node *current = head;
    struct node *newnode = new node(t_data);

    while (current && current->data != t_idata) {
        current = current->next;
    }

    if (current) {
        // Insert newnode after current
        newnode->next = current->next;
        current->next = newnode;
    } else {
        // t_idata not found, so insert at the end of the list
        if (!head) {
            // List is empty, newnode becomes head
            head = newnode;
        } else {
            // Find the last node
            current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = newnode;
        }
    }
}

		show(int size){
			struct node*current = head;
			int i;
			while(current->next&&i<size){
				cout<<current->data<<endl;
				current = current->next;
				i++;
			}
		}
};

main()
{
	linklist l1;
	l1.add_list(20);
	l1.add_list(30);
	l1.b_add_list(100);
	l1.m_add_list(500,20);
	l1.show(4);
	
}
