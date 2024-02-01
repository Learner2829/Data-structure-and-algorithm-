#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;
	node(int t_data)
	{
		data=t_data;
		next = NULL;	
	}
};
//	insert in last
class linklist{
	private:
		node* head;
	public:
		linklist()
		{
			head=NULL;
		}
		add_node(int t_data)
		{
			node* newnode = new node(t_data);
			
			if(!head)
			{
				head = newnode;
			}
			else
			{
				node* current = head;
				while(current->next)
				{
					current=current->next;
				}
				current->next = newnode;
			}
		}
			display(){
				node* current = head;
				while(current){
					cout<<"Data:"<<current->data<<endl;	
					current=current->next;
				}
			}

};
int main()
{	
linklist list1;
list1.add_node(11);
list1.add_node(20);
list1.add_node(35);
list1.display();
return 0;
}

