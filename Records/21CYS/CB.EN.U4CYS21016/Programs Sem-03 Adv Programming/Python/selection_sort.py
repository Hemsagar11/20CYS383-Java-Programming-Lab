#Selection sort algorithm

list1=[45,67,109,1,4,10]
#list1.sort() - built in function to sort the list
print(list1)

for i in range(0,len(list1)):
    for j in range(i+1,len(list1)):
        if list1[i]>list1[j]:
            list1[i],list1[j]=list1[j],list1[i]
    print(list1) # list after each iteration
#print(list1)