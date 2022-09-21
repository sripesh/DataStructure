#include "structure.cpp"


class Slist
{
    node*head;
    public:
        void init()
        {
            head=new node;
            head=NULL;
        }
        void addend(int info)
        {
            node *r=new node;
            if(r==NULL)
            {
                cout<<"Memory is full.\n";
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
        void addbeg(int info)
        {
            node*temp=new node;
            if(temp==NULL)
            {
                cout<<"Memory is full.\n";
            }
            else
            {
                temp->data=info;
                temp->link=head;
                head=temp;
            }
        }
        void addafter(int info,int loc)
        {
            node*temp=head;
            node*r=new node;
            if(r==NULL)
            {
                cout<<"Memory is full.\n";
            }
            else
            {
                r->data=info;
                while(temp->data!=loc)
                {
                    if(temp->link==NULL)
                    {
                        cout<<"No such data as reference exist.\n";
                        return;
                    }
                    temp=temp->link;
                }
                if(temp->link==NULL)
                {
                    r->link=NULL;
                    temp->link=r;
                }
                else
                {
                    r->link=temp->link;
                    temp->link=r;
                }

            }
        }
        void rev()
        {
            node *q,*r,*s;
            q=head;
            r=NULL;
            while(q!=NULL)
            {
                s=r;
                r=q;
                q=q->link;
                r->link=s;
            }
            head=r;
        }
        void count()
        {
            if(head==NULL)
            {
                cout<<"Linked list is empty.\n";
            }
            else
            {
                int c=0;
                node*temp=head;
                while(temp!=NULL)
                {
                    c++;
                    temp=temp->link;
                }
                cout<<"Total No of Data= "<<c<<endl;
            }
        }
        void deldata(int info)
        {

            if(head==NULL)
            {
                cout<<"Linked list is empty.\n";
            }
            else
            {
                node*temp=head;
                node*old;
                while(temp!=NULL)
                {
                    if(temp->data==info)
                    {
                        break;
                    }
                    old=temp;
                    temp=temp->link;
                }
                if(temp==NULL)
                {
                    cout<<"No such Data.\n";
                    return;
                }
                old->link=temp->link;
                free(temp);
                cout<<endl;
            }

        }
        void display()
        {
            if(head==NULL)
            {
                cout<<"Linked list is empty.\n";
            }
            else
            {
                node*temp=head;
                while(temp!=NULL)
                {
                    cout<<temp->data<<"->";
                    temp=temp->link;
                }
                cout<<endl;
            }
        }
};

class Clist
{
    node*head;int count;
    public:
        void init()
        {
            head=NULL;
            count=0;
        }
        void addend(int info)
        {
            node*r=new node;
            if(r==NULL)
            {
                cout<<"Memory is full.\n";
            }
            else
            {
                node*temp=head;
                r->data=info;
                r->link=head;
                if(head==NULL)
                {
                    head=r;
                    count++;
                }
                else
                {
                    int i=count;
                    while((i--)-1)
                    {
                        temp=temp->link;
                    }
                    temp->link=r;
                    count++;
                }
            }
        }
        void addbeg(int info)
        {
            node*r=new node;
            if(r==NULL)
            {
                cout<<"Memory is full.\n";
            }
            else
            {
                int i=count;
                node*temp=head;
                r->data=info;
                r->link=head;
                if(head==NULL)
                {
                    head=r;
                    count++;
                }
                else
                {
                    while((i--)-1)
                    {
                        temp=temp->link;
                    }
                    temp->link=r;
                    head=r;
                    count++;
                }
            }
        }
        void addafter(int info,int loc)
        {
            node*temp=head;
            node*r=new node;
            if(r==NULL)
            {
                cout<<"Memory is full.\n";
            }
            else
            {
                int i=count;
                r->data=info;
                while(temp->data!=loc)
                {
                    if(!(i--))
                    {
                        cout<<"No such data as reference exist.\n";
                        return;
                    }
                    temp=temp->link;
                }
                r->link=temp->link;
                temp->link=r;
                count++;
            }
        }
        void rev()
        {
            int i=count;
            node*q,*r,*s;
            q=head;
            r=head;
            while(i--)
            {
                s=r;
                r=q;
                q=q->link;
                r->link=s;
            }
            head=r;
        }
        void ct()
        {
            cout<<"Total No of Data= "<<count<<endl;
        }
        void deldata(int info)
        {
            if(head==NULL)
            {
                cout<<"Linked list is empty.\n";
            }
            else
            {
                int i=count;
                node*temp=head;
                node*old;
                while(i)
                {
                    if(temp->data==info)
                    {
                        break;
                    }
                    old=temp;
                    temp=temp->link;
                    i--;
                }
                if(!i)
                {
                    cout<<"No such Data.\n";
                    return;
                }
                old->link=temp->link;
                free(temp);
                cout<<endl;
                count--;
            }
        }
        void display()
        {
            if(head==NULL)
            {
                cout<<"Linked list is empty.\n";
            }
            else
            {
                int i=count;
                node*temp=head;
                while(i--)
                {
                    cout<<temp->data<<"->";
                    temp=temp->link;
                }
                cout<<endl;
            }
        }
};

class Dlist
{
    link *head;
    public:
        void init()
        {
            head=NULL;
        }
        void addend(int info)
        {
            link *r=new link;
            if(r==NULL)
            {
                cout<<"Memory is full.\n";
            }
            else
            {
                link*temp=head;
                r->data=info;
                r->next=NULL;
                if(head==NULL)
                {
                    head=r;
                }
                else
                {
                    while(temp->next!=NULL)
                    {
                        temp=temp->next;
                    }
                    temp->next=r;
                    r->pre=temp;
                }
            }
        }
        void addbeg(int info)
        {
            link*temp=new link;
            if(temp==NULL)
            {
                cout<<"Memory is full.\n";
            }
            else
            {
                temp->data=info;
                temp->next=head;
                head->pre=temp;
                head=temp;
            }
        }
        void addafter(int info,int loc)
        {
            link*temp=head;
            link*r=new link;
            if(r==NULL)
            {
                cout<<"Memory is full.\n";
            }
            else
            {
                r->data=info;
                while(temp->data!=loc)
                {
                    if(temp->next==NULL)
                    {
                        cout<<"No such data as reference exist.\n";
                        return;
                    }
                    temp=temp->next;
                }
                if(temp->next==NULL)
                {
                    r->next=NULL;
                    temp->next=r;
                    r->pre=temp;
                }
                else
                {
                    link*now;
                    now=temp->next;
                    r->next=now;
                    r->pre=temp;
                    temp->next=r;
                    now->pre=r;
                }

            }
        }
        void rev()
        {
            cout<<"Coming Soon.\n";
        }
        void count()
        {
            if(head==NULL)
            {
                cout<<"Linked list is empty.\n";
            }
            else
            {
                int c=0;
                link*temp=head;
                while(temp!=NULL)
                {
                    c++;
                    temp=temp->next;
                }
                cout<<"Total No of Data= "<<c<<endl;
            }
        }
        void deldata(int info)
        {
            if(head==NULL)
            {
                cout<<"Linked list is empty.\n";
            }
            else
            {
                link*temp=head;
                link*old;
                link*now;
                while(temp!=NULL)
                {
                    if(temp->data==info)
                    {
                        break;
                    }
                    old=temp;
                    temp=temp->next;
                    now=temp->next;
                }
                if(temp==NULL)
                {
                    cout<<"No such Data.\n";
                    return;
                }
                if(temp->pre=NULL)
                {
                    now=temp->next;
                    now->pre=NULL;
                    free(temp);
                    cout<<endl;
                }
                else
                {
                    old->next=now;
                    now->pre=old;
                    free(temp);
                    cout<<endl;
                }
            }
        }
        void display()
        {
            if(head==NULL)
            {
                cout<<"Linked list is empty.\n";
            }
            else
            {
                link*temp=head;
                while(temp!=NULL)
                {
                    cout<<temp->data<<"->";
                    temp=temp->next;
                }
                cout<<endl;
            }
        }
};
