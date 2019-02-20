# Input Format

# The first line contains . The second line contains an array   of  integers each separated by a space.

# Constraints

# Output Format

# Print the runner-up score.

# Sample Input 0

# 5
# 2 3 6 6 5
# Sample Output 0

# 5

if __name__ == '__main__':
    max = -float("inf")
    n = int(input())
    if 2 <= n <= 10:
        arr = list(map(int, input().split()))
        if -100 <= len(arr) <= 100:
            arr.sort()
            for x in arr:
                if x > max:
                    max = x
            #print(arr)
            #print(max)
            for x in reversed(arr):
                if x == max:
                    continue
                else:
                    max = x
                    break
            print(max)
        else:
            print("Out Of Bounds")
    else:
        print("Out Of Bounds")