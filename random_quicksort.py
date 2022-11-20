import random
def quicksort(array,low,high):
    if low<high:
        pi=partitionrand(array,low,high)
        quicksort(array,low,pi-1)
        quicksort(array,pi+1,high)
        
def partition(array,low,high):
    pivot=low
    i=low+1
    for j in range(low+1,high+1):
        if array[j]<=array[pivot]:
            array[i],array[j]=array[j],array[i]
            i=i+1
    array[pivot],array[i-1]=array[i-1],array[pivot]
    pivot=i-1
    return pivot

def partitionrand(array,low,high):
    rand=random.randrange(low,high)
    array[low],array[rand]=array[rand],array[low]
    return partition(array,low,high)

array=[]
size=int(input("Enter number of elemnts you want to sort"))
print("Enter the elements")
for i in range(size):
    s=int(input())
    array.append(s)
print("Unsorted Array: \n", array)
quicksort(array,0,size-1)
print("Sorted Array: \n",array)
