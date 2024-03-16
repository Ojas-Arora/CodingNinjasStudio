def fun(n):
    sum_e,sum_o=0,0
    for i in str(n):
        i=int(i)
        if i%2==0:
            sum_e+=i
        else:
            sum_o+=i
    print(f'{sum_e} {sum_o}')


n=int(input())
fun(n)
