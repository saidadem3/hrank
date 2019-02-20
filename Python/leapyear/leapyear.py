def is_leap(year):
    leap = False
    
    if year % 4 == 0 and not year % 100 == 0:
        leap = True
    elif year % 100 == 0 and year % 400 == 0:
        leap = True
    elif year % 100 == 0 and not year % 400 == 0:
        leap = False
    
    return leap

# year = int(input())

for x in list(range(2090 ,2120)):
    print(f'year: {x} {is_leap(x)}')