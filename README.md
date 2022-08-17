#### JAVA- Python - C++  Pattern Problem Series For Beginners - Xam 

********
##### I cover all type of Pattern Problems  from Basic to Pro Level Check this Explanation Video Playlist .
### [Check Here](https://www.youtube.com/watch?v=Ucwgn-wcbGs&list=PL24H0nY4FDEmxeSyPoyBmvHV5V_T0Bk5w&ab_channel=Xam)

###### Help us improve this guide - Fork, Pull Requests, Shares and Likes are recommended !



# Problem List
#### Click On Any Problem 
* [**1. Solid Rectangle :**](#1-solid-rectangle)
* [**2. Hollow Rectangle :**](#2-hollow-rectangle)
* [**3. Half Pyramid :**](#3-half-pyramid)
* [**4. Inverted half Pyramid :**](#4-inverted-half-pyramid)
* [**5. Inverted & Rotated Half Pyramid :**](#5-inverted--rotated-half-pyramid)
* [**6. Half Pyramid with Numbers :**](#6-half-pyramid-with-numbers)
* [**7. Inverted half Pyramid with Numbers :**](#7-inverted-half-pyramid-with-numbers)
* [**8. Floyd’s triangle :**](#8-floyds-triangle)
* [**9. (0-1) Triangle:**](#9-0-1-triangle)

****************************
****************************
# 1. Solid Rectangle 
## Explanation Video(Hindi) - [Click here](https://youtu.be/Ucwgn-wcbGs)

## Exercise
Print the pattern using for loop

<p align="center">
        <img src="https://github.com/Subham-Maity/java-python-problem-solving-series/blob/master/Image(ignore)/1%20p.png?raw=true"/>
        </p>

## Approach:
```javascript
So here we did like this
Row range:0-4 
Column range:0-5
```
<p align="center">
        <img src="https://github.com/Subham-Maity/java-python-problem-solving-series/blob/master/Image(ignore)/1pa.png?raw=true"/>
        </p>

## Solution

### Java :

```java

public class code_xam {
    public static void main(String[] args) {
        for (int i = 1 ; i <=4 ; i++){
            for (int j = 1; j <=5 ; j++){
                System.out.print("*");}
                System.out.println();
            }
        }
    }


```




### C++ :

```cpp

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int rows,columns,i,j;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    //Takes input from user for rows
    cout<<"Enter the number of columns: ";
    cin>>columns;
     //Takes input from user for columns
     i=1;
     while( i<=rows){//outer while loop
            j=1;
    while(j<=columns){//inner while loop
        cout<<"*";//print star
        j++;
    }
    cout<<"\n";//move to next line
     i++;
}
getch();
    return 0;
}


```


### Python :

```python
for i in range(1, 5):
    for j in range(1, 6):
        print("*", end=" ")
    print()
```

**************

# 2. Hollow Rectangle

## Explanation Video(Hindi) - [Click here](https://youtu.be/08RP_L9D-VQ)
## Exercise
Print the pattern using for loop
<p align="center">
        <img src="https://github.com/Subham-Maity/java-python-problem-solving-series/blob/master/Image(ignore)/2p.png?raw=true"/>
        </p>

## Approach:
<p align="center">
        <img src="https://github.com/Subham-Maity/java-python-problem-solving-series/blob/master/Image(ignore)/2pa.png?raw=true"/>
        </p>

## Solution

### Java :

```java
public class code_xam {
    public static void main(String[] args) {
 
        for(int i=1; i<=4; i++) {
            for(int j=1; j<=5; j++) {
                if(i == 1 || i == 4 || j == 1 || j == 5) {
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }
}
```
### C++

```cpp
// C++ code for hollow rectangle
#include <bits/stdc++.h>
using namespace std;
 
// Function to print hollow rectangle
void print_rectangle(int n, int m)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            if (i == 1 || i == n ||
                j == 1 || j == m)        
                cout << "*";            
            else
                cout << " ";
        }
        cout << endl;
    }
 
}
 
// Driver Code
int main()
{
    int rows = 6, columns = 20;
    print_rectangle(rows, columns);
    return 0;
}

```

### Python :

```python
for i in range(1, 5):
    for j in range(1, 6):
        if (i == 1 or i == 4 or
                j == 1 or j == 5):
            print("*", end=" ")
        else:
            print(" ", end=" ")
 
    print()
```

**************


# 3. Half Pyramid

## Explanation Video(Hindi) - [Click here](https://youtu.be/HDaXjX9th_Q)

## Exercise
Print the pattern using for loop

<p align="center">
        <img src="https://github.com/Subham-Maity/java-python-problem-solving-series/blob/master/Image(ignore)/3p.png?raw=true"/>
        </p>

## Approach:

<p align="center">
        <img src="https://github.com/Subham-Maity/java-python-problem-solving-series/blob/master/Image(ignore)/3pa.png?raw=true"/>
        </p>

## Solution

### Java :

```java
public class code_xam {
    public static void main(String[] args) {
 
        for (int i = 1; i <= 4; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }
 
            System.out.println();
        }
    }
}



```
### C++ :

```cpp
#include <iostream>
using namespace std;

int main()
{
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}
```

### Python :

```python
for i in range(0, 5):
    for j in range(0, i + 1):
        print("*", end=" ")
 
    print(" ")
```

*****************************************
# 4. Inverted half Pyramid
## Explanation Video(Hindi) - [Click here](https://youtu.be/VJauAkXLBrU)

## Exercise
Print the pattern using for loop


<p align="center">
        <img src="https://github.com/Subham-Maity/java-python-problem-solving-series/blob/master/Image(ignore)/4p.png?raw=true"/>
        </p>

## Approach:

<p align="center">
        <img src="https://github.com/Subham-Maity/java-python-problem-solving-series/blob/master/Image(ignore)/4p1.png?raw=true"/>
        </p>

## Solution

### Java :

```java
public class CodeXam {
    public static void main(String[] args) {
        for(int i=1; i<=4; i++ ){
            for(int j=4; j>=i; j--){
                System.out.print("*");
            }
            System.out.println();
        }
    }

}

public class CodeXam {
    public static void main(String[] args) {
        for (int i = 4 ; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }

            System.out.println();
        }
    }
}

public class CodeXam {
    public static void main(String[] args) {
       for (int i = 4; i >= 1; i--) {
            for (int j = i ; j >= 1; j--) {
                System.out.print("*");
            }

            System.out.println();
        }
    }
}


```

### C++ :
```cpp
// C++ program to print inverted half pyramid using stars
#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;

    if (rows > 0) {
        cout << endl;
        for (int i = rows; i >= 1; i--) {
            for (int j = 1; j <= i; j++)
                cout << "*" << " ";
            cout << endl;
        }
    }
    
    return 0;
}
```

### Python :


```python
for i in range(4, 0, -1):
    for j in range(i + 1, 1, -1):
        print("* ", end="")
 
    print(" ")

```
******************
# 5. Inverted & Rotated Half Pyramid
## Explanation Video(Hindi) - [Click here](https://youtu.be/cSvY3O4hkSM)

## Exercise
Print the pattern using for loop




<p align="center">
        <img src="https://github.com/Subham-Maity/java-python-problem-solving-series/blob/master/Image(ignore)/5p.png?raw=true"/>
        </p>

## Approach:

<p align="center">
        <img src="https://github.com/Subham-Maity/java-python-problem-solving-series/blob/master/Image(ignore)/5p1.png?raw=true"/>
        </p>

## Solution

### Java :

```java
//Approach -1

public class CodeXam {
    public static void main(String[] args) {
        for (int i = 1; i <= 4; i++) {
            for (int j = 1; j <= 4 - i; j++) {
                System.out.print(" ");
            }
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
 








 

//Approach -2

public class CodeXam {
    public static void main(String[] args) {
        for (int i = 4; i>=1; i--) {
            for (int j = 1; j<i ; j++) {
                System.out.print(" ");}
            for (int j = 0; j <= 4-i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}










//Approach -3

public class CodeXam {
    public static void main(String[] args) {
        for (int i = 1; i < 5; i++) {
            for (int j = 5; j > 0; j--) {
                if (j > i) {
                    System.out.print(" ");
                } else {
                    System.out.print("*");
                }
            }
            System.out.println(" ");
        }
    }
}

```
### C++ :
```cpp
#include <iostream>

using namespace std;
int main() {
    for (int i = 4; i >= 1; i--) {
        for (int j = 1; j < i; j++) {
            cout << " ";
        }
        for (int j = 0; j <= 4 - i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
```

### Python :


```python
for i in range(1, 5):
    for j in range(5, 0, -1):
        if j > i:
            print(" ", end=" ")
        else:
            print("*", end=" ")
 
    print("")

```
*****************

# 6. Half Pyramid with Numbers
## Explanation Video(Hindi) - [Click here](https://youtu.be/_WukHXQMVes)

## Exercise
Print the pattern using for loop


<p align="center">
        <img src="https://github.com/Subham-Maity/java-python-problem-solving-series/blob/master/Image(ignore)/6p.png?raw=true"/>
        </p>

## Approach:

<p align="center">
        <img src="https://github.com/Subham-Maity/java-python-problem-solving-series/blob/master/Image(ignore)/6p1.png?raw=true"/>
        </p>

## Solution

### Java :

```java
public class code_xam {
    public static void main(String[] args) {
        int n = 5;
 
        //For "Row"
        for (int i = 1; i <= n; i++) {
 
            //For "Column"
            for (int j = 1; j <= i ; j++) {
                System.out.print(j);}
            System.out.println();
 
            }
            System.out.println();
        }
    }

```
### C++ :
``` cpp
//C++ Program to print half pyramid pattern using numbers
 
#include <iostream>
using namespace std;
 
int main()
{
    int rows, i, j;
 
    cout << "Enter number of rows: ";
    cin >> rows;
 
    // outer loop is responsible for row
    for(i = 1; i <= rows; i++)
    {
        //inner loop is responsible for columns
        for(j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        // give line breaks after ending every row
        cout << "\n";
    }
    return 0;
}
```

### Python :


```python
for i in range(0, 5):
    num = 1
    for j in range(0, i+1):
        print(num, end=" ")
        num += 1
 
    print(" ")
```

*****************
# 7. Inverted half Pyramid with Numbers

## Explanation Video(Hindi) - [Click here](https://youtu.be/rBayBbDbJxs)



## Exercise
Print the pattern using for loop



<p align="center">
        <img src="https://github.com/Subham-Maity/java-python-problem-solving-series/blob/master/Image(ignore)/7p.png?raw=true"/>
        </p>

## Approach:

<p align="center">
        <img src="https://github.com/Subham-Maity/java-python-problem-solving-series/blob/master/Image(ignore)/7p1.png?raw=true"/>
        </p>



## Solution

### Java :

```java

public class CodeXam {
    public static void main(String[] args) {
        for (int i = 5 ; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                System.out.print(j);
            }

            System.out.println();
        }
    }
}


public class CodeXam {
    public static void main(String[] args) {
        for (int i = 5; i >= 1; i--) {
            int num = 1;
            for (int j = 1; j <= i ; j++) {
                System.out.print(num + " ");
                num++;
            }
            System.out.println();
        }
    }

}




public class CodeXam {
    public static void main(String[] args) {
     for (int i = 5; i > 0; i--) {
         int num = 1;
         for (int j = i + 1; j > 1; j--) {
             System.out.print(num + " ");
             num++;
         }
         System.out.println(" ");
     }
    }

}


```

### C++ :

```cpp

#include <iostream>
using namespace std;
 int main()
 {
     for (int i = 5 ; i >= 1; i--)
     {
         for (int j = 1; j <= i; j++)
         {
             cout << j;
         }
         cout << endl;
     }
     return 0;
 }

```



### Python :


```python

for i in range(5, 0, -1):
    num = 1
    for j in range(i + 1, 1, -1):
        print(num, end=" ")
        num += 1
 
    print(" ")

```



*****************
# 8. Floyd’s triangle

## Explanation Video(Hindi) - [Click here](https://youtu.be/kfyRW9AjJEw)


## Exercise
Print the pattern using for loop



<p align="center">
        <img src="https://github.com/Subham-Maity/java-python-problem-solving-series/blob/master/Image(ignore)/8p.png?raw=true"/>
        </p>

## Approach:

<p align="center">
        <img src="https://github.com/Subham-Maity/java-python-problem-solving-series/blob/master/Image(ignore)/8p1.png?raw=true"/>
        </p>


## Solution

### Java :

```java

public class CodeXam {
    public static void main(String[] args) {
        int num =1 ;
        for (int i = 1; i <= 5; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(num++ + " ");
            }

            System.out.println();

        }
    }
}

```

### C++ :

```cpp

#include <iostream>
using namespace std;
 int main()
{
    int num = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num++ << " ";
        }
        cout << endl;
    }
    return 0;
}
```



### Python :


```python

for i in range(1, 6):
    for j in range(1, i+1):
        print(num, end="  ")
        num += 1
    print("  ")

```
**************************

# 9. 0-1 Triangle

## Explanation Video(Hindi) - [Click here](https://youtu.be/SZd4aa47tiI)


## Exercise
Print the pattern using for loop


<p align="center">
        <img src="https://github.com/Subham-Maity/java-python-problem-solving-series/blob/master/Image(ignore)/9p.png?raw=true"/>
        </p>

## Approach:

<p align="center">
        <img src="https://github.com/Subham-Maity/java-python-problem-solving-series/blob/master/Image(ignore)/9p1.png?raw=true"/>
        </p>

<p align="center">
        <img src="https://github.com/Subham-Maity/java-python-problem-solving-series/blob/master/Image(ignore)/9p2.png?raw=true"/>
        </p>

## Solution

### Java :

```java
public class code_xam {
    public static void main(String args[]) {
        int n = 5;
        int sum;
 
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=i; j++) {
                sum = i+j;
                if((sum) % 2 == 0) {
                    System.out.print(1+" ");
                } else {
                    System.out.print(0+" ");
                }
            }
            System.out.println();
        }
    }
}

```

### C++ :

```cpp

 #include <iostream>
using namespace std;
 int main() {
     for (int i = 1; i <= 5; i++) {
         for (int j = 1; j <= i; j++) {
             int sum = i+j;
             if (sum % 2 == 0){
                 cout << 1 << " ";
             }
             else{
                 cout << 0 << " ";
             }
         }
         cout << endl;
     }
     return 0;
 }
```

### Python :


```python
for i in range(1, 6):
    for j in range(1, i+1):
        sums = i + j
        if sums % 2 == 0:
            print(1, end=" ")
        else:
            print(0, end=" ")
    print(" ")
   

```




**************************