#include<iostream>
using namespace std;
 struct node
 {
 	int data;
 	node *next;
 };
 class link_list
 {
 private:
 node *head,*tail;
  int *x;
 public:
 link_list()
 {
 	head= NULL;
 	tail= NULL;
 }

 void add_node(int n)
    {
        node *tmp = new node;
        tmp->data = n;
        tmp->next = NULL;

        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
            x++;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
            x++;;
        }
    }
    
void Maximum()
{
	node *tmp;
	tmp=head;
	 node *n;
	 n=head;
	while(tmp!=NULL)
	{
		if(tmp->data > n->data)
		{
			n=tmp;
		}
		tmp=tmp->next;
	}
	cout<<"Maximum Number is: "<<n->data<<endl;
}
void Minimum()
{
	node *tmp;
	tmp=head;
	 node *n;
	 n=head;
	while(tmp!=NULL)
	{
		if(tmp->data < n->data)
		{
			n=tmp;
		}
		tmp=tmp->next;
	}
	cout<<"Minimum Number is: "<<n->data<<endl;
}
void Average()
{
	node *tmp;
	tmp=head;
	 int count=0,sum=0,avg=0;
	while(tmp!=NULL)
	{
		sum=sum+tmp->data;
		count++;
		tmp=tmp->next;
	}
	avg=sum/count;
	cout<< "Average is: "<<avg<<endl;
}
void Prime_number()
{
	node *tmp;
	tmp=head;
	int count=0;
	cout<<"Prime Numbers:"<<endl;
	while(tmp!=NULL)
	{
		if(tmp->data==2)
		{
			cout<<tmp->data<<endl;
			count++;
		}
		if(tmp->data%2!=0 && tmp->data%3!=0 && tmp->data!=1 )
		{
			cout<<tmp->data<<endl;
			count++;
	}
		tmp=tmp->next;
	}
	cout<<"Total Prime Number is: "<<count<<endl;
}

    void Reverse()
    {
    	node *p, *c, *n;
    	p=NULL;
    	c=head;
    	while(c!=NULL)
    	{
    		n=c->next;
    		c->next=p;
    		p=c;
    		c=n;
		}
		
		head=p;

		 node *tmp;
        tmp = head;
        cout<<"\n Reverse Numbers:"<<endl;
        while (tmp != NULL)
        {
            cout << tmp->data << endl;
            tmp = tmp->next;
        }
    	
	}
};
int main()
{
	link_list a;
	a.add_node(1);
	a.add_node(2);
	a.add_node(3);
	a.add_node(4);
	a.add_node(5);
	a.add_node(6);
	a.add_node(7);
	a.add_node(8);
	a.add_node(9);
	a.add_node(10);
	int x;
cout<<"Press 1: To find Maximum number :"<<endl; 
cout<<"Press 2: To find Minimum number  :"<<endl;
cout<<"Press 3: To find Average of numbers :"<<endl;
cout<<"Press 4: To find Prime number :"<<endl;
cout<<"Press 5: To reverse the linked list :"<<endl;    	
	cin>>x;
	if(x==1)
	{
	a.Maximum();
	}
	if(x==2)
	{
	a.Minimum();
	}
	if(x==3)
	{
	a.Average();
	}
	if(x==4)
	{
	a.Prime_number();
	}
	if(x==5)
	{
	a.Reverse();
	}
	
}
