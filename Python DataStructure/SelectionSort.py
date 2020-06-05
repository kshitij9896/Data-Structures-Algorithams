#Selection sort

def selsort(myarray,r):
    for x in range(r):
        minimum = x
        for y in range(x+1,r):
            if myarray[y] < myarray[minimum]:
                minimum=y
        (myarray[x],myarray[minimum]) = (myarray[minimum],myarray[x])

mylist = [34,23,1,67,4]
r =len(mylist)
selsort(mylist,r)
print(mylist)
        
