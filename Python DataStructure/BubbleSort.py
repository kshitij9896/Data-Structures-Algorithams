#Bubble Sort

def bs(a):
    b=len(a)-1
    for x in range(b):
        for y in range(b-x):
            if a[y]>a[y+1]:
                a[y],a[y+1]=a[y+1],a[y]
    return a

a=[3,6,1,8]
print(bs(a))
