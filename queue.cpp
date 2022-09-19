#include "structure.cpp"


class Queue_d
{
    node*head;
    public:
        void init()
        {
            head=new node;
            head=NULL;
        }
        void push(int info)
        {
            node *r=new node;
            if(r==NULL)
            {
                cout<<"Queue is full.\n";
            }
            else
            {
                node*temp=head;
                r->data=info;
                r->link=NULL;
                if(head==NULL)
                {
                    head=r;
                }
                else
                {
                    while(temp->link!=NULL)
                    {
                        temp=temp->link;
                    }
                    temp->link=r;
                }
            }
        }
        void pop()
        {
            if(head==NULL)
            {
                cout<<"Queue is empty.\n";
            }
            else
            {
                node *temp;
                temp=head;
                cout<<temp->data<<endl;
                head=head->link;
                free(temp);
            }
        }
        void peek()
        {
            if(head==NULL)
            {
                cout<<"Queue is empty.\n";
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
                cout<<"Queue is empty.\n";
            }
            else
            {
                cout<<"The data in Queue are:\n";
                while(temp!=NULL)
                {
                    cout<<temp->data<<"->";
                    temp=temp->link;
                }
                cout<<endl;
            }
        }

};

class Queue_s
{
    int arr[MAX];
    int front,rear;
    public:
        void init()
        {
            front=rear=-1;
            fori(MAX)
            arr[i]=0;
        }
        void push(int info)
        {
            if((front==0&&rear==MAX-1)||(rear+1==front))
            {
                cout<<"Queue is full.\n";
            }
            else
            {
                if(rear==MAX-1)
                {
                    rear=0;
                }
                else
                {
                    rear++;
                }
                arr[rear]=info;
                if(front==-1)
                {
                    front=0;
                }
            }
        }
        void pop()
        {
            if(front==-1)
            {
                cout<<"Queue is empty.\n";
            }
            else
            {
                cout<<arr[front]<<endl;
                arr[front]=0;
                if(front==rear)
                {
                    front=rear=-1;
                }
                else if(front==MAX-1)
                {
                    front=0;
                }
                else
                {
                    front++;
                }
            }
        }
        void peek()
        {
            if(front==-1)
            {
                cout<<"Queue is empty.\n";
            }
            else
            {
                cout<<arr[front]<<endl;
            }
        }
        void display()
        {
            if(front==-1)
            {
                cout<<"Queue is empty.\n";
                rear=-1;
            }
            else
            {
                if(front<=rear)
                {
                    for(int i=front;i<=rear;i++)
                    {
                        cout<<arr[i]<<"\t";
                    }
                    cout<<endl;
                }
                else if(front>rear)
                {
                    for(int i=front;i<=MAX-1;i++)
                    {
                        cout<<arr[i]<<"\t";
                    }
                    fori(rear+1)
                    {
                        cout<<arr[i]<<"\t";
                    }
                    cout<<endl;
                }
            }
        }
};
