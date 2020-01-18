def cal(rank, rList, nList) :
    if rank == 0 or rank > sum(nList) : return 0
    for cnt, n in enumerate(nList):
        if sum(nList[:cnt+1]) >= rank : return rList[cnt]

r2017 = [500, 300, 200, 50, 30, 10]
n2017 = [1,2,3,4,5,6]
r2018 = [512, 256, 128, 64, 32]
n2018 = [1, 2, 4, 8, 16]

t = int(input())
for i in range(t):
    a, b = map(int, input().split())
    reward = cal(a, r2017, n2017) + cal(b, r2018, n2018)
    print(reward*10000)
