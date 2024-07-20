#include<stdio.h>
int main()
{
    int in, out, buck_size, n, bucket = 0;
    printf("Enter the bucket size: ");
    scanf("%d", &buck_size);
    printf("Enter the no:of inputs: ");
    scanf("%d", &n);
    printf("Enter the packet outgoing rate: ");
    scanf("%d", &out);
    while(n != 0)
    {
        printf(\n"Enter the incoming packet size: ");
        scanf("%d", &in);
        printf("Incoming packet size: %d\n",in);
        if (in <= (buck_size - bucket))
        {
            bucket += in;
            printf("Bucket status: %dout of %d\n", bucket, buck_size);
        }
        else
        {
            printf("Dropped packets: %d\n", in-(buck_size - bucket));
            printf("Bucket size: %d out of %d\n", bucket, buck_size);
            bucket = buck_size;
        }
        bucket = bucket - out;
        printf("After outgoing, bucket status: %d packets out of %d\n", bucket, buck_size);
        n--;
    }
}
