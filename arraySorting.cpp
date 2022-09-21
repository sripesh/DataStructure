#include "structure.cpp"


class Array
{
    int arr[MAX];
    protected:
        int par(int a[],int low,int high)
        {
            int i=low-1;
            int p=arr[high];
            for(int j=low;j<high;j++)
            {
                if(arr[j]<p)
                {
                    i++;
                    swap(arr[i],arr[j]);
                }
                swap(arr[i+1],arr[high]);
            }
            return 1+i;
        }
    public:
        void init()
        {
            fori(MAX)
                arr[i]=0;
        }
        void get()
        {
            fori(MAX)
            {
                cout<<i+1<<(i==0?"st":(i==1?"nd":(i==2?"rd":"th")))<<"->";
                cin>>arr[i];
            }
            cout<<endl;
        }
        void display()
        {
            fori(MAX)
                cout<<arr[i]<<"\t";
            cout<<endl;
        }
        void bubble()
        {
            fori(MAX-1)
            {
                forj(MAX-1-i)
                {
                    if(arr[j]>arr[j+1])
                    {
                        arr[j]+=arr[j+1];
                        arr[j+1]=arr[j]-arr[j+1];
                        arr[j]=arr[j]-arr[j+1];
                    }
                }
            }
        }
        void insertion()
        {
            for(int i=1;i<MAX;i++)
            {
                int j=i-1;
                int data=arr[i];
                while(j>=0&&data<arr[j])
                {
                    arr[j+1]=arr[j];
                    j--;
                }
                arr[j+1]=data;
            }
        }
        void selection()
        {
            fori(MAX-1)
            {
                int data=arr[i],index=i;
                int j=i+1;
                for(;j<MAX;j++)
                {
                    if(data>arr[j])
                    {
                        data=arr[j];
                        index=j;
                    }
                }
                if(i!=index)
                {
                    arr[index]=arr[i];
                    arr[i]=data;
                }
            }
        }
        void quick(int lb,int hb)
        {
            int i=lb,j=hb,key=arr[lb];
            if(lb<hb)
            {
                while(i<j)
                {
                    while(key>=arr[i]&&i<j)
                    {
                        i++;
                    }
                    while(key<arr[j])
                    {
                        j--;
                    }
                    if(i<j)
                    {
                        arr[i]+=arr[j];
                        arr[j]=arr[i]-arr[j];
                        arr[i]=arr[i]-arr[j];
                    }
                }
                arr[lb]=arr[j];
                arr[j]=key;
                quick(lb,j-1);
                quick(j+1,hb);
            }
        }
        void mergesort(int lb,int hb)
        {
            if(lb<hb)
            {
                int mid=(lb+hb)/2;
                mergesort(lb,mid);
                mergesort(mid+1,hb);
                merge(lb,mid,hb);
            }
        }
        void merge(int lb,int mid,int hb)
        {
            int t1=mid-lb+1;
            int t2=hb-mid;
            int temp1[t1];
            int temp2[t2];
            for(int i=0;i<t1;i++)
                temp1[i]=arr[lb+i];
            for(int i=0;i<t2;i++)
                temp2[i]=arr[mid+1+i];
            int i=0,j=0,k=lb;
            while(i<t1&&j<t2)
            {
                if(temp1[i]>temp2[j])
                {
                    arr[k]=temp2[j];
                    k++;
                    j++;
                }
                else
                {
                    arr[k]=temp1[i];
                    k++;
                    i++;
                }
            }
            while(i<t1)
            {
                arr[k]=temp1[i];
                i++;
                k++;
            }
            while(j<t2)
            {
                arr[k]=temp2[j];
                j++;
                k++;
            }
        }
};
