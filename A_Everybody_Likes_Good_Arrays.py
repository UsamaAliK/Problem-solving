t=int(input())
for _ in range(t):
    n=int(input())
    arr=list(map(int,input().split()))
    count=0
    product=1
    i=0
    while i<len(arr)-1:
        if ((arr[i]%2==0) and (arr[i+1]%2==0)) or (( arr[i]%2!=0) and (arr[i+1]%2!=0)):
            product=arr[i]*arr[i+1]
            arr[i]=product
            arr.pop(i+1)
            count+=1
        else:
            i+=1
    print(count)

        