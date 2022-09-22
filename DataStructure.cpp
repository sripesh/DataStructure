#include "arraySorting.cpp"

using namespace std;
int main()
{
    start:
    int choice;
    cout<<"Enter what concept U want to use:\n1:For Stack\n2:For Queue\n3:For Linked List\n4:For Array\n5:For Tree\n6:Graph\n7:Exit"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1://*******************STACK**********************
        {
            cout<<"\n\n**********STACK**********\n\n";
            int choice_1;
            cout<<"Enter Your choice:\n1:Dynamic Stack\n2:Static Stack\n\n3:Back\n4:Exit"<<endl;
            cin>>choice_1;
            switch (choice_1)
            {
                case 1://******************DYNAMIC******************
                {
                    Stack_d sd;
                    cout<<"You choose Dynamic Stack.\n"<<endl;
                    sd.init();
                    int choice_11;
                    dppp:
                    cout<<"Enter the choice:\n1:Push\n2:Pop\n3:Peek\n4:To Display\n\n5:Go to main menu.\n6:Exit"<<endl;
                    cin>>choice_11;
                    switch(choice_11)
                    {
                        case 1:
                        {
                            int a=0;
                            do{
                            int data;
                            cout<<"Enter the number to push: ";
                            cin>>data;
                            sd.push(data);
                            cout<<"Do You want to continue the same operation(1/0): ";
                            cin>>a;
                            }while(a==1);
                            goto dppp;
                        }
                        break;
                        case 2:
                        {
                            int a=0;
                            do{
                            cout<<"You choose to pop.\n";
                            sd.pop();
                            cout<<"Do You want to continue the same operation(1/0): ";
                            cin>>a;
                            }while(a==1);
                            goto dppp;
                        }
                        break;
                        case 3:
                        {
                            cout<<"You choose to peek.\n";
                            sd.peek();
                            goto dppp;
                        }
                        break;
                        case 4:
                        {
                            cout<<"You choose to display.\n";
                            sd.display();
                            goto dppp;
                        }
                        break;
                        case 5:
                        {
                            goto start;
                        }
                        break;
                        case 6:
                        {
                            exit(0);
                        }
                        break;
                        default:
                        {
                            cout<<"Wroung input"<<endl;
                            goto start;
                        }
                    }

                }
                break;
                case 2://******************STATIC*******************
                {
                    Stack_s ss;
                    cout<<"You choose Static Stack.\n"<<endl;
                    ss.init();
                    int choice_12;
                    sppp:
                    cout<<"Enter the choice:\n1:Push\n2:Pop\n3:Peek\n4:To Display\n\n5:Go to main menu.\n6:Exit"<<endl;
                    cin>>choice_12;
                    switch(choice_12)
                    {
                        case 1:
                        {
                            int a=0;
                            do{
                            int data;
                            cout<<"Enter the number to push: ";
                            cin>>data;
                            ss.push(data);
                            cout<<"Do You want to continue the same operation(1/0): ";
                            cin>>a;
                            }while(a==1);
                            goto sppp;
                        }
                        break;
                        case 2:
                        {
                            int a=0;
                            do{
                            cout<<"You choose to pop.\n";
                            ss.pop();
                            cout<<"Do You want to continue the same operation(1/0): ";
                            cin>>a;
                            }while(a==1);
                            goto sppp;
                        }
                        break;
                        case 3:
                        {
                            int a=0;
                            cout<<"You choose to peek.\n";
                            ss.peek();
                            goto sppp;
                        }
                        break;
                        case 4:
                        {
                            cout<<"You choose to display.\n";
                            ss.display();
                            goto sppp;
                        }
                        break;
                        case 5:
                        {
                            goto start;
                        }
                        break;
                        case 6:
                        {
                            exit(0);
                        }
                        break;
                        default:
                        {
                            cout<<"Wroung input"<<endl;
                            goto start;
                        }
                    }
                }
                break;
                case 3:
                {
                    goto start;
                }
                break;
                case 4:
                {
                    exit(0);
                }
                break;
                default:
                {
                    cout<<"Wrong input."<<endl;
                    goto start;
                }
            }

        }
        break;
        case 2://********************QUEUE*********************
        {
            cout<<"\n\n**********QUEUE**********\n\n";
            int choice_2;
            cout<<"Enter Your choice:\n1:Dynamic Queue\n2:Static Queue\n\n3:Back\n4:Exit"<<endl;
            cin>>choice_2;
            switch (choice_2)
            {
                case 1://******************DYNAMIC******************
                {
                    Queue_d qd;
                    cout<<"You choose Dynamic Queue.\n"<<endl;
                    qd.init();
                    int choice_21;
                    dqpp:
                    cout<<"Enter the choice:\n1:Push\n2:Pop\n3:Peek\n4:To Display\n\n5:Go to main menu.\n6:Exit"<<endl;
                    cin>>choice_21;
                    switch(choice_21)
                    {
                        case 1:
                        {
                            int a=0;
                            do{
                            int data;
                            cout<<"Enter the number to push: ";
                            cin>>data;
                            qd.push(data);
                            cout<<"Do You want to continue the same operation(1/0): ";
                            cin>>a;
                            }while(a==1);
                            goto dqpp;
                        }
                        break;
                        case 2:
                        {
                            int a=0;
                            do{
                            cout<<"You choose to pop.\n";
                            qd.pop();
                            cout<<"Do You want to continue the same operation(1/0): ";
                            cin>>a;
                            }while(a==1);
                            goto dqpp;
                        }
                        break;
                        case 3:
                        {
                            int a=0;
                            cout<<"You choose to peek.\n";
                            qd.peek();
                            goto dqpp;
                        }
                        break;
                        case 4:
                        {
                            cout<<"You choose to display.\n";
                            qd.display();
                            goto dqpp;
                        }
                        break;
                        case 5:
                        {
                            goto start;
                        }
                        break;
                        case 6:
                        {
                            exit(0);
                        }
                        break;
                        default:
                        {
                            cout<<"Wroung input"<<endl;
                            goto start;
                        }
                    }

                }
                break;
                case 2://******************STATIC*******************
                {
                    Queue_s qs;
                    cout<<"You choose Static Queue.\n"<<endl;
                    qs.init();
                    int choice_22;
                    sqpp:
                    cout<<"Enter the choice:\n1:Push\n2:Pop\n3:Peek\n4:To Display\n\n5:Go to main menu.\n6:Exit"<<endl;
                    cin>>choice_22;
                    switch(choice_22)
                    {
                        case 1:
                        {
                            int a=0;
                            do{
                            int data;
                            cout<<"Enter the number to push: ";
                            cin>>data;
                            qs.push(data);
                            cout<<"Do You want to continue the same operation(1/0): ";
                            cin>>a;
                            }while(a==1);
                            goto sqpp;
                        }
                        break;
                        case 2:
                        {
                            int a=0;
                            do{
                            cout<<"You choose to pop.\n";
                            qs.pop();
                            cout<<"Do You want to continue the same operation(1/0): ";
                            cin>>a;
                            }while(a==1);
                            goto sqpp;
                        }
                        break;
                        case 3:
                        {
                            int a=0;
                            cout<<"You choose to peek.\n";
                            qs.peek();
                            goto sqpp;
                        }
                        break;
                        case 4:
                        {
                            cout<<"You choose to display.\n";
                            qs.display();
                            goto sqpp;
                        }
                        break;
                        case 5:
                        {
                            goto start;
                        }
                        break;
                        case 6:
                        {
                            exit(0);
                        }
                        break;
                        default:
                        {
                            cout<<"Wroung input"<<endl;
                            goto start;
                        }
                    }
                }
                break;
                case 3:
                {
                    goto start;
                }
                break;
                case 4:
                {
                    exit(0);
                }
                break;
                default:
                {
                    cout<<"Wrong input."<<endl;
                    goto start;
                }
            }

        }
        break;
        case 3://******************LINKED LIST*****************
        {
            cout<<"\n\n**********LINKED LIST**********\n\n";
            int choice_3;
            cout<<"Enter Your choice:\n1:Single Linked List\n2:Double Linked List\n3:Circular Linked List\n\n4:Back\n5:Exit"<<endl;
            cin>>choice_3;
            switch(choice_3)
            {
                case 1://*******************SINGLE********************
                {
                    Slist sl;
                    cout<<"You choose Single Linked List.\n"<<endl;
                    sl.init();
                    int choice_31;
                    sls:
                    cout<<"Enter the choice:\n1:Add at the end\n2:Add at the begining\n3:Add after a data\n4:Delete the data\n5:Count the number of data\n6:Reverse the data\n7:Display the data\n\n8:Go to main menu.\n9:Exit"<<endl;
                    cin>>choice_31;
                    switch(choice_31)
                    {
                        case 1:
                        {
                            int a=0;
                            do{
                            int data;
                            cout<<"Enter the Data to add at the end: ";
                            cin>>data;
                            sl.addend(data);
                            cout<<"Do You want to continue the same operation(1/0): ";
                            cin>>a;
                            }while(a==1);
                            goto sls;
                        }
                        break;
                        case 2:
                        {
                            int a=0;
                            do{
                            int data;
                            cout<<"Enter the Data to add at the begining: ";
                            cin>>data;
                            sl.addbeg(data);
                            cout<<"Do You want to continue the same operation(1/0): ";
                            cin>>a;
                            }while(a==1);
                            goto sls;
                        }
                        break;
                        case 3:
                        {
                            int a=0;
                            do{
                            int data,ref;
                            cout<<"Enter the Data to add: ";
                            cin>>data;
                            cout<<"Enter the data as a reference: ";
                            cin>>ref;
                            sl.addafter(data,ref);
                            cout<<"Do You want to continue the same operation(1/0): ";
                            cin>>a;
                            }while(a==1);
                            goto sls;
                        }
                        break;
                        case 4:
                        {
                            int a=0;
                            do{
                            int data;
                            cout<<"Enter the Data to delete: ";
                            cin>>data;
                            sl.deldata(data);
                            cout<<"Do You want to continue the same operation(1/0): ";
                            cin>>a;
                            }while(a==1);
                            goto sls;
                        }
                        break;
                        case 5:
                        {
                            sl.count();
                            goto sls;
                        }
                        break;
                        case 6:
                        {
                            cout<<"You choose to reverse."<<endl;
                            sl.rev();
                            goto sls;
                        }
                        break;
                        case 7:
                        {
                            cout<<"You choose to display.\n";
                            sl.display();
                            goto sls;
                        }
                        break;
                        case 8:
                        {
                            goto start;
                        }
                        break;
                        case 9:
                        {
                            exit(0);
                        }
                        break;
                        default:
                        {
                            cout<<"Wroung input"<<endl;
                            goto start;
                        }
                    }
                }
                break;
                case 2://*******************DOUBLE********************
                {
                    Dlist dl;
                    cout<<"You choose Double Linked List.\n"<<endl;
                    dl.init();
                    int choice_32;
                    dls:
                    cout<<"Enter the choice:\n1:Add at the end\n2:Add at the begining\n3:Add after a data\n4:Delete the data\n5:Count the number of data\n6:Reverse the data\n7:Display the data\n\n8:Go to main menu.\n9:Exit"<<endl;
                    cin>>choice_32;
                    switch(choice_32)
                    {
                        case 1:
                        {
                            int a=0;
                            do{
                            int data;
                            cout<<"Enter the Data to add at the end: ";
                            cin>>data;
                            dl.addend(data);
                            cout<<"Do You want to continue the same operation(1/0): ";
                            cin>>a;
                            }while(a==1);
                            goto dls;
                        }
                        break;
                        case 2:
                        {
                            int a=0;
                            do{
                            int data;
                            cout<<"Enter the Data to add at the begining: ";
                            cin>>data;
                            dl.addbeg(data);
                            cout<<"Do You want to continue the same operation(1/0): ";
                            cin>>a;
                            }while(a==1);
                            goto dls;
                        }
                        break;
                        case 3:
                        {
                            int a=0;
                            do{
                            int data,ref;
                            cout<<"Enter the Data to add: ";
                            cin>>data;
                            cout<<"Enter the data as a reference: ";
                            cin>>ref;
                            dl.addafter(data,ref);
                            cout<<"Do You want to continue the same operation(1/0): ";
                            cin>>a;
                            }while(a==1);
                            goto dls;
                        }
                        break;
                        case 4:
                        {
                            int a=0;
                            do{
                            int data;
                            cout<<"Enter the Data to delete: ";
                            cin>>data;
                            dl.deldata(data);
                            cout<<"Do You want to continue the same operation(1/0): ";
                            cin>>a;
                            }while(a==1);
                            goto dls;
                        }
                        break;
                        case 5:
                        {
                            dl.count();
                            goto dls;
                        }
                        break;
                        case 6:
                        {
                            cout<<"You choose to reverse."<<endl;
                            dl.rev();
                            goto dls;
                        }
                        break;
                        case 7:
                        {
                            cout<<"You choose to display.\n";
                            dl.display();
                            goto dls;
                        }
                        break;
                        case 8:
                        {
                            goto start;
                        }
                        break;
                        case 9:
                        {
                            exit(0);
                        }
                        break;
                        default:
                        {
                            cout<<"Wroung input"<<endl;
                            goto start;
                        }
                    }
                }
                break;
                case 3://******************CIRCULAR*******************
                {
                    Clist cl;
                    cout<<"You choose Circular Linked List.\n"<<endl;
                    cl.init();
                    int choice_33;
                    cls:
                    cout<<"Enter the choice:\n1:Add at the end\n2:Add at the begining\n3:Add after a data\n4:Delete the data\n5:Count the number of data\n6:Reverse the data\n7:Display the data\n\n8:Go to main menu.\n9:Exit"<<endl;
                    cin>>choice_33;
                    switch(choice_33)
                    {
                        case 1:
                        {
                            int a=0;
                            do{
                            int data;
                            cout<<"Enter the Data to add at the end: ";
                            cin>>data;
                            cl.addend(data);
                            cout<<"Do You want to continue the same operation(1/0): ";
                            cin>>a;
                            }while(a==1);
                            goto cls;
                        }
                        break;
                        case 2:
                        {
                            int a=0;
                            do{
                            int data;
                            cout<<"Enter the Data to add at the begining: ";
                            cin>>data;
                            cl.addbeg(data);
                            cout<<"Do You want to continue the same operation(1/0): ";
                            cin>>a;
                            }while(a==1);
                            goto cls;
                        }
                        break;
                        case 3:
                        {
                            int a=0;
                            do{
                            int data,ref;
                            cout<<"Enter the Data to add: ";
                            cin>>data;
                            cout<<"Enter the data as a reference: ";
                            cin>>ref;
                            cl.addafter(data,ref);
                            cout<<"Do You want to continue the same operation(1/0): ";
                            cin>>a;
                            }while(a==1);
                            goto cls;
                        }
                        break;
                        case 4:
                        {
                            int a=0;
                            do{
                            int data;
                            cout<<"Enter the Data to delete: ";
                            cin>>data;
                            cl.deldata(data);
                            cout<<"Do You want to continue the same operation(1/0): ";
                            cin>>a;
                            }while(a==1);
                            goto cls;
                        }
                        break;
                        case 5:
                        {
                            cl.ct();
                            goto cls;
                        }
                        break;
                        case 6:
                        {
                            cout<<"You choose to reverse."<<endl;
                            cl.rev();
                            goto cls;
                        }
                        break;
                        case 7:
                        {
                            cout<<"You choose to display.\n";
                            cl.display();
                            goto cls;
                        }
                        break;
                        case 8:
                        {
                            goto start;
                        }
                        break;
                        case 9:
                        {
                            exit(0);
                        }
                        break;
                        default:
                        {
                            cout<<"Wroung input"<<endl;
                            goto start;
                        }
                    }
                }
                break;
                case 4:
                {
                    goto start;
                }
                break;
                case 5:
                {
                    exit(0);
                }
                break;
                default:
                {
                    cout<<"Wroung input"<<endl;
                    goto start;
                }
            }
        }
        break;
        case 4://*******************ARRAY***********************
        {
            cout<<"\n\n**********ARRAY**********\n\n";
            Array ray;
            ray.init();
            cout<<"Enter the elements of array:\n";
            ray.get();
            int choice_4;
            sort:
            cout<<"Enter Your choice:\n1:Bubble Sorting\n2:Insertion Sorting\n3:Selection Sorting\n4:Quick Sorting\n5:Merge Sorting\n6:Re-enter the Array\n\n7:Go to main menu\n8:Exit"<<endl;
            cin>>choice_4;
            switch (choice_4)
            {
                case 1://********************BUBBLE***************************
                {
                    cout<<"Your choose Bubble sorting.\nArray before sorting:\n";
                    ray.display();
                    ray.bubble();
                    cout<<"Array after sorting:\n";
                    ray.display();

                    goto sort;
                }
                break;
                case 2://********************insertion************************
                {
                    cout<<"Your choose Insertion sorting.\nArray before sorting:\n";
                    ray.display();
                    ray.insertion();
                    cout<<"Array after sorting:\n";
                    ray.display();
                    goto sort;
                }
                break;
                case 3://**********************SELECTION**********************
                {
                    cout<<"Your choose Selection sorting.\nArray before sorting:\n";
                    ray.display();
                    ray.selection();
                    cout<<"Array after sorting:\n";
                    ray.display();
                    goto sort;
                }
                break;
                case 4://**********************QUICK**********************
                {
                    cout<<"Your choose Quick sorting.\nArray before sorting:\n";
                    ray.display();
                    ray.quick(0,MAX-1);
                    cout<<"Array after sorting:\n";
                    ray.display();
                    goto sort;
                }
                break;
                case 5://**********************MERGE**********************
                {
                    cout<<"Your choose Merge sorting.\nArray before sorting:\n";
                    ray.display();
                    ray.mergesort(0,MAX-1);
                    cout<<"Array after sorting:\n";
                    ray.display();
                    goto sort;
                }
                break;
                case 6:
                {
                    ray.init();
                    cout<<"Enter the elements of array:\n";
                    ray.get();
                    goto sort;
                }
                break;
                case 7:
                {
                    goto start;
                }
                break;
                case 8:
                {
                    exit(0);
                }
                break;
                default:
                {
                    cout<<"Wrong input."<<endl;
                    goto start;
                }
            }
        }
        break;
        case 5://*********************TREE*********************
        {
            cout<<"\n\n**********TREE**********\n\n";
            cout<<"Coming Soon\n\n";
            goto start;
        }
        case 6://*********************GRAPH*********************
        {
            cout<<"\n\n**********GRAPH**********\n\n";
            cout<<"Coming Soon\n\n";
            goto start;
        }
        case 7://*******************EXIT************************
        {
            exit(0);
        }
        break;
        default:
        {
            cout<<"Wrong input."<<endl;
            goto start;
        }
    }
    return 0;
}
