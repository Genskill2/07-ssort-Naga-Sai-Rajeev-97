void swap_max(int arr[], int l, int pos)
{
    int max=-999999;
    int indx=0;
    for (int i=pos;i<l;i++)
    {
        if(max<arr[i])
        {
            max =arr[i];
            indx=i;
        }
    }
    int temp =arr[indx];
    arr[indx]=arr[pos];
    arr[pos]=temp;
}
void ssort(int arr[], int l)
{
    for(int i=0;i<l-1;i++)
    {
        swap_max(arr,l,i);
    }
}
