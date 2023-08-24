/*
* Beau Simon
* beau.a.simon@und.edu
* Assignment #4 - Java
* This is our fourth assignment for CSCI 265. This is the Java portion.
*/

public class Main {

    public static int findMax(int[] scoresList) {
        int maxScore = scoresList[0];
        for (int i = 1; i < scoresList.length; i++) {
            if (scoresList[i] > maxScore) {
                maxScore = scoresList[i];
            }
        }
        return maxScore;
    }

    public static int findMin(int[] scoresList) {
        int minScore = scoresList[0];
        for (int i = 1; i < scoresList.length; i++) {
            if (scoresList[i] < minScore) {
                minScore = scoresList[i];
            }
        }
        return minScore;
    }

    public static double calcAverage(int[] scoresList) {
        if (scoresList.length == 0) {
            return -1;
        }
        int total = 0;
        for (int score : scoresList) {
            total += score;
        }
        return (double) total / scoresList.length;
    }

    public static int findFirst(int[] theList, int valueToFind) {
        for (int i = 0; i < theList.length; i++) {
            if (theList[i] == valueToFind) {
                return i;
            }
        }
        return -1;
    }

    public static int findLast(int[] theList, int valueToFind) {
        int lastIndex = -1;
        for (int i = 0; i < theList.length; i++) {
            if (theList[i] == valueToFind) {
                lastIndex = i;
            }
        }
        return lastIndex;
    }

    public static int findAboveAverage(int[] theList) {
        double average = calcAverage(theList);
        int count = 0;
        for (int score : theList) {
            if (score >= average) {
                count++;
            }
        }
        return count;
    }

    public static int findBelowAverage(int[] theList) {
        double average = calcAverage(theList);
        int count = 0;
        for (int score : theList) {
            if (score < average) {
                count++;
            }
        }
        return count;
    }

    public static String findStudentWith(String[] strList, int[] intList, int valueToFind) {
        for (int i = 0; i < intList.length; i++) {
            if (intList[i] == valueToFind) {
                return strList[i];
            }
        }
        return "";
    }

    public static void main(String[] args) {
        // Test arrays
        int[] scoresList = {78, 92, 85, 76, 90};
        String[] namesList = {"Alice", "Bob", "Charlie", "David", "Eve"};

        // Testing findMax
        System.out.println("Max Score: " + findMax(scoresList));

        // Testing findMin
        System.out.println("Min Score: " + findMin(scoresList));

        // Testing calcAverage
        System.out.println("Average Score: " + calcAverage(scoresList));

        // Testing findFirst
        System.out.println("First occurrence of 85: " + findFirst(scoresList, 85));

        // Testing findLast
        System.out.println("Last occurrence of 85: " + findLast(scoresList, 85));

        // Testing findAboveAverage
        System.out.println("Number of scores above or equal to average: " + findAboveAverage(scoresList));

        // Testing findBelowAverage
        System.out.println("Number of scores below average: " + findBelowAverage(scoresList));

        // Testing findStudentWith
        System.out.println("Student with score 92: " + findStudentWith(namesList, scoresList, 92));
        System.out.println("Student with score 78: " + findStudentWith(namesList, scoresList, 78));
    }
}
