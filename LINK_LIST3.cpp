#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;
	node(t_data){
		data=t_data;
		next = NULL;
	}
};
class linklist{
	private :
		node* head;
	public:
		add_node(int t_data,int index){
			int i=0;
			newnode=new node(t_data);
			if(!head)
			{
				head->data=t_data;
				head->next=NULL;
			}
			else
			{
				node* current = head;
				while(current->next=NUll)
				{
					current=current->next;
					i=i+1;
					if(index==i)
					{
						break;
					}
				}
				newnode->next=current->next;
				current->next=newnode;s
			}
		}
		show()
	{
		node* current =head;
		while(current)
		{
			cout<<"Data:"<<current->data<<endl;
			current=current->next;
		} 
	}
};


main()
{
linklist list1;
list1.add_node(11);
list1.add_node(20);
list1.add_node(35);
list1.show();
}
