max = 0;
for i in range(2, 1001):
    while (i % 2 == 0):
        i /= 2;
    while (i % 5 == 0):
        i /= 5;

    if (i > 1):
        r, n = 10, 1
        while (r % i != 1):
            r *= 10
            r %= i
            n += 1
        if (n > max):
            max = i
print max

