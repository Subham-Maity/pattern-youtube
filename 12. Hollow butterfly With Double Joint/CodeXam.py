n = 5
for i in range(1, n + 1):
   space = 2 * n - 2 * i
   for j in range(1, i + 1):
       if j == 1 or j == i:
           print("*", end='')
       else:
           print(" ", end='')
   for j in range(space):
       print(" ", end='')
   for j in range(1, i + 1):
       if j == 1 or j == i:
           print("*", end='')
       else:
           print(" ", end='')
   print()
 
for i in range(n, 0, -1):
   space = 2 * n - 2 * i
   for j in range(1, i + 1):
       if j == 1 or j == i:
           print("*", end='')
       else:
           print(" ", end='')
   for j in range(space):
       print(" ", end='')
   for j in range(1, i + 1):
       if j == 1 or j == i:
           print("*", end='')
       else:
           print(" ", end='')
   print()