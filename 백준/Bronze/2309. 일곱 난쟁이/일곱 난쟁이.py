h = [0,0,0,0,0,0,0,0,0]
hsum = 0

for i in range(9):
    h[i] = int(input())
    hsum += h[i]

h.sort()

for i in range(8):
    hsum -= h[i]
    for j in range(i+1, 9):
        hsum -= h[j]
        if hsum == 100:
            h.remove(h[j])
            break
        else:
            hsum += h[j]
    if hsum == 100:
        h.remove(h[i])
        break
    hsum += h[i]
                
for i in range(7):
    print(h[i])