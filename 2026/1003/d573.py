#來偷寫一下py .w.
while 1:
    try:
       n=int(input())
    except EOFError:
        break
    data={}
    for i in range(n):
        inp=[int(j) for j in input().split()]
        for i in range(2,len(inp)):
            data[inp[i]]=inp[0]
    f=int(input())
    print(data[f])