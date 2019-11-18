def fib(n):
    if n==0:
        return 0
    elif n<=2:
        return 1
    else:
        return fib(n-1) + fib(n-2)

num = int(input("숫자 줘봐"))
num = fib(num)
print(str(num) + " 정도 줄께")
