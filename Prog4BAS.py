'''
Beau Simon
beau.a.simon@und.edu
Assignment #4 - Python

This is our fourth assignment for CSCI 265. This is the Python portion.
'''

def findMax(scoresList):
    max_score = scoresList[0]
    for i in range(1, len(scoresList)):
        if scoresList[i] > max_score:
            max_score = scoresList[i]
    return max_score

def findMin(scoresList):
    min_score = scoresList[0]
    for i in range(1, len(scoresList)):
        if scoresList[i] < min_score:
            min_score = scoresList[i]
    return min_score

def calcAverage(scoresList):
    if scoresList == []:
        return -1
    total = 0
    count = 0
    for i in range(len(scoresList)):
        total += scoresList[i]
        count += 1
    return total / count

def findFirst(theList, valueToFind):
    index = -1
    for i in range(len(theList)):
        if theList[i] == valueToFind:
            index = i
            break
    return index

def findLast(theList, valueToFind):
    index = -1
    for i in range(len(theList) - 1, -1, -1):
        if theList[i] == valueToFind:
            index = i
            break
    return index

def findAboveAverage(theList):
    average = calcAverage(theList)
    count = 0
    for i in range(len(theList)):
        if theList[i] >= average:
            count += 1
    return count

def findBelowAverage(theList):
    average = calcAverage(theList)
    count = 0
    for i in range(len(theList)):
        if theList[i] < average:
            count += 1
    return count

def findStudentWith(strList, intList, valueToFind):
    index = -1
    for i in range(len(intList)):
        if intList[i] == valueToFind:
            index = i
            break
    if index != -1:
        return strList[index]
    return ""

def main():
    # Test arrays
    scoresList = [78, 92, 85, 76, 90]
    namesList = ["Alice", "Bob", "Charlie", "David", "Eve"]

    # Testing findMax
    print("Max Score:", findMax(scoresList))

    # Testing findMin
    print("Min Score:", findMin(scoresList))

    # Testing calcAverage
    print("Average Score:", calcAverage(scoresList))

    # Testing findFirst
    print("First occurrence of 85:", findFirst(scoresList, 85))

    # Testing findLast
    print("Last occurrence of 85:", findLast(scoresList, 85))

    # Testing findAboveAverage
    print("Number of scores above or equal to average:", findAboveAverage(scoresList))

    # Testing findBelowAverage
    print("Number of scores below average:", findBelowAverage(scoresList))

    # Testing findStudentWith
    print("Student with score 92:", findStudentWith(namesList, scoresList, 92))
    print("Student with score 78:", findStudentWith(namesList, scoresList, 78))

main()
