#include "structure.cpp"


class Stack_s
{
    int arr[MAX];
    int top;
    public:
        void init()
        {
            top=-1;
        }
        void push(int a)
        {
            if(top+1==MAX)
            {
                cout<<"Stack is full.\n";
            }
            else
            {
                top++;
                arr[top]=a;
            }
        }
        void pop()
        {
            if(top<0)
            {
                cout<<"Stack is empty.\n";

            }
            else
            {
                cout<<arr[top]<<endl;
                top--;
            }
        }
        void peek()
        {
            if(top<0)
            {
                cout<<"Stack is empty.\n";

            }
            else
            {
                cout<<arr[top]<<endl;
            }
        }
        void display()
        {
            if(top==-1)
            {
                cout<<"Stack is empty.\n";
            }
            else
            {
                cout<<"The data in Stack are:\n";
                fori(top+1)
                    cout<<arr[i]<<"\t";
                cout<<endl;
            }
        }
};

class Stack_d
{
    node *head;
    public:
        void init()
        {
            head=new node;
            head=NULL;
        }
        void push(int info)
        {
            node *temp=new node;
            if(temp==NULL)
            {
                cout<<"Stack is full.\n";
            }
            else
            {
                temp->data=info;
                temp->link=head;
                head=temp;
            }
        }
        void pop()
        {
            if(head==NULL)
            {
                cout<<"Stack is empty.\n";
            }
            else
            {
                node *temp;
                temp = head;
                cout<<temp->data<<endl;
                head=head->link;
                free(temp);
            }
        }
        void peek()
        {
            if(head==NULL)
            {
                cout<<"Stack is empty.\n";
            }
            else
            {
                cout<<head->data<<endl;
            }
        }
        void display()
        {
            node *temp;
            temp=head;
            if(temp==NULL)
            {
                cout<<"Stack is empty.\n";
            }
            else
            {
                cout<<"The data in Stack are:\n";
                while (temp!=NULL)
                {
                    cout<<temp->data<<"->";
                    temp=temp->link;
                }
                cout<<endl;
            }
        }
};
