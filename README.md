# Task-1 For Loop

Logic in one sentence:
The loop starts from 1, adds each number to sum one by one, increments i after every iteration, and stops when all numbers from 1 to n have been added.



| Iteration | i | sum = sum + i | New sum |
| --------- | - | ------------- | ------- |
| 1         | 1 | 0 + 1         | 1       |
| 2         | 2 | 1 + 2         | 3       |
| 3         | 3 | 3 + 3         | 6       |
| 4         | 4 | 6 + 4         | 10      |
| 5         | 5 | 10 + 5        | 15      |


Code Workflow diagram : 


Start
   │
Initialize i = 1, sum = 0
   │
Is i ≤ n?
   │
  Yes
   │
sum = sum + i
   │
i = i + 1
   │
Go back to check i ≤ n
   │
  No
   │
Display sum
   │
End

# Task - 2 While Loop

| Iteration | i | fact = fact × i | New fact |
| --------- | - | --------------- | -------- |
| 1         | 1 | 1 × 1           | 1        |
| 2         | 2 | 1 × 2           | 2        |
| 3         | 3 | 2 × 3           | 6        |
| 4         | 4 | 6 × 4           | 24       |
| 5         | 5 | 24 × 5          | 120      |

# Workflow Of While Loop

Start
   │
Read n
   │
Initialize i = 1, fact = 1
   │
Is i ≤ n?
   │
  Yes
   │
fact = fact × i
   │
i = i + 1
   │
Go back to check condition
   │
  No
   │
Print factorial
   │
End
