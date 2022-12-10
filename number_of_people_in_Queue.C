int* canSeePersonsCount(int* a, int n, int* r){
int i,j,k,count=0;
int maxh;
int* ar=(int*)malloc(sizeof(int)*n);
 *r=n;
for(i=0;i<n;i++)
 {   
     if(i!=n-1)
       maxh=a[i+1];
     for(j=i+1;j<n;j++)
     {
        
        if(a[i]>a[j])
        {
            if(maxh<=a[j])
            {
                maxh=a[j];
                count++;
            }
            else{
            continue;
            }
        }
        else
        {
        count++;
        maxh=a[i+1];
        break;
        }
         
     }
      ar[i]=count;
         count=0;
 }
 return ar;



}
