#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
struct item
{
    int weight;
    int value;
    double vbyw;
};
bool compare(struct item a, struct item b)
{
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    return r1 > r2;
}
int main()
{
    int n,i;
    printf("Number of items: ");
    scanf("%d",&n);
    struct item items[n];
    for(i=0; i<n; i++)
    {
        printf("Weight of item %d : ",i+1);
        scanf("%d",&items[i].weight);
        printf("Value of item %d : ",i+1);
        scanf("%d",&items[i].value);
    }
    for(i=0; i<n; i++){
        items[i].vbyw = (1.0)*items[i].value/items[i].weight;
    }
    int x;
    printf("Maximum capacity: ");
    scanf("%d",&x);
    std::sort(items, items + n, compare);
    int totalWeight = 0;
    int totalValue = 0;
    for(int i=0; i<n; i++){
        if (totalWeight + items[i].weight <= x)
        {
            totalWeight = totalWeight + items[i].weight;
            totalValue = totalValue + items[i].value;
        }
        else
        {
            int w = x - totalWeight;
            totalValue = totalValue + w * items[i].vbyw;
            break;
        }
    }
    printf("Total value : %d",totalValue);
    return 0;
}

