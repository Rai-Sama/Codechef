//CC April 21 LTime Problem B
t = int(input())
for j in range(t):
    n, a, b = [int(x) for x in input().split()]
    s = 0
    an = 0
    l = ['E', 'Q','U','I','N','O','X']

    for _ in range(n):
        c = input()
        if c[0] in l:
            s += a
        else:
            an += b
    if s > an:
        print("SARTHAK")
    elif an > s:
        print("ANURADHA")
    else:
        print("DRAW")