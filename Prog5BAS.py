'''
Beau Simon
beau.a.simon@und.edu
Assignment #5 - Python

This is our fifth assignment for CSCI 265. This is the Python portion.
'''

from collections import defaultdict

def addPart(parts, part, cost):
    if part.lower() in parts:
        parts[part.lower()] = cost
        return False
    else:
        parts[part.lower()] = cost
        return True
        
# Returns the number of unique parts
def totalParts(parts):
    return len(parts)
    
# Returns a list of part names with a price greater than or equal to the upperLimit variable.
def partsGreaterThan(parts, upperLimit):
    result = []
    for part, cost in parts.items():
        if cost >= upperLimit:
            result.append(part)
    return result
    
# Returns True if part is a valid part in the data structure, otherwise return False.
def isPart(parts, part):
    return part.lower() in parts
    
# Returns the part name with the least expensive price.
def leastExpensivePart(parts):
    if not parts:
        return None
    return min(parts, key=parts.get)
    
# Returns the part name with the most expensive price.
def mostExpensivePart(parts):
    if not parts:
        return None
    return max(parts, key=parts.get)
    
#Returns the average price of all parts in the dictionary.
def averagePrice(parts):
    if not parts:
        return -1
    return sum(parts.values()) / len(parts)
    
# Writes a table of each part and its price to the display.
def printParts(parts):
    print(f"{'Part':<20}{'Price':>10}")
    print("="*30)
    for part, price in parts.items():
        print(f"{part:<20}{price:>10}")

def main():
    parts = defaultdict(int)
    addPart(parts, "Part 1", 50)
    addPart(parts, "Part 2", 30)
    addPart(parts, "Part 3", 20)
    addPart(parts, "Part 4", 50)
    addPart(parts, "Part 1", 70)  # Update the price of Part1
    addPart(parts, "Part 5", 90)

    print("Total parts:", totalParts(parts))
    print("Parts greater than or equal to $30:", partsGreaterThan(parts, 30))
    print("Is 'Part 3' a valid part?", isPart(parts, "Part 3"))
    print("Least expensive part:", leastExpensivePart(parts))
    print("Most expensive part:", mostExpensivePart(parts))
    print("Average price of all parts:", averagePrice(parts))

    print("Printing parts:")
    printParts(parts)

if __name__ == "__main__":
    main()