'''
Beau Simon
beau.a.simon@und.edu
Assignment #3 - Python

This is our third assignment for CSCI 265. This is the Python portion.
'''
def isOdd(value):
    return value % 2 != 0

def isEven(value):
    return not isOdd(value)

def multiplicationTable(multiplier, numberOfItems):
    for i in range(1, numberOfItems+1):
        result = multiplier * i
        print(f"{i} * {multiplier} = {result}")

def sumOfOdds(value):
    return sum(i for i in range(1, value+1) if isOdd(i))

def isNotAFactor(value1, value2):
    return value1 % value2 != 0

def valuesBetween(lower, upper, incr=1):
    return len(range(lower, upper+1, incr))

def irTriangle(side, character, fillChar=' '):
    for i in range(1, side+1):
        if i == 1 or i == side:
            line = character * i
        else:
            line = character + fillChar*(i-2) + character
        print(line)

def main():
    # Test isOdd
    print(isOdd(3))   # Output: True
    print(isOdd(4))   # Output: False

    # Test isEven
    print(isEven(3))  # Output: False
    print(isEven(4))  # Output: True

    # Test multiplicationTable
    multiplicationTable(4, 3)

    # Test sumOfOdds
    print(sumOfOdds(9))  # Output: 25

    # Test isNotAFactor
    print(isNotAFactor(10, 3))  # Output: True
    print(isNotAFactor(10, 2))  # Output: False

    # Test valuesBetween
    print(valuesBetween(1, 10, 2))  # Output: 5

    # Test irTriangle
    irTriangle(5, '*')

# Call the main function to test the code
main()
