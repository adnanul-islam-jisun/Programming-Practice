s=1
e =50

for i in range(s,e+1):
        for j in range(2,i):
            if (i % j) == 0:
                break
        else:
                print(i)
