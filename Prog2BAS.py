'''
Beau Simon
beau.a.simon@und.edu
Assignment #2 - Python

This is our second assignment for CSCI 265. This is the Python portion.
'''
print("This section will ask for two integers")

# Get the first value from the user
first_value = int(input("Enter the first value: "))

# Check if the first value is a multiple of 5
if first_value % 5 == 0:
    print(f"{first_value} is a multiple of 5.")
else:
    print(f"{first_value} is not a multiple of 5.")

# Check if the first value is even or odd
if first_value % 2 == 0:
    print(f"{first_value} is even.")
else:
    print(f"{first_value} is odd.")

# Check if the first value is positive, negative, or zero
if first_value > 0:
    print(f"{first_value} is positive.")
elif first_value < 0:
    print(f"{first_value} is negative.")
else:
    print(f"{first_value} is zero.")

# Check if the first value is within the range of 2020 to 2023 inclusive
if 2020 <= first_value <= 2023:
    print(f"{first_value} is within the range of 2020 to 2023.")
else:
    print(f"{first_value} is not within the range of 2020 to 2023.")

# Get the second value from the user
second_value = int(input("Enter the second value: "))

# Compare the second value with the first value
if second_value < first_value:
    print("The second value is less than the first value.")
elif second_value > first_value:
    print("The second value is greater than the first value.")
else:
    print("The second value is equal to the first value.")

print("This program will ask a user for credits and presumed year in college.")

# Get the number of credits from the user
credits = float(input("Enter the number of credits: "))

# Get the anticipated year from the user
year = input("Enter anticipated year (Freshman, Sophomore, Junior, Senior): ")

# Check if the anticipated year is correct based on the number of credits
if 0 <= credits <= 23 and year == "Freshman":
    print(f"A student with {credits} credits is a Freshman.")
elif 24 <= credits <= 59 and year == "Sophomore":
    print(f"A student with {credits} credits is a Sophomore.")
elif 60 <= credits <= 89 and year == "Junior":
    print(f"A student with {credits} credits is a Junior.")
elif credits >= 90 and year == "Senior":
    print(f"A student with {credits} credits is a Senior.")
else:
    # Determine the correct year based on the number of credits
    if credits <= 23:
        correct_year = "Freshman"
    elif 24 <= credits <= 59:
        correct_year = "Sophomore"
    elif 60 <= credits <= 89:
        correct_year = "Junior"
    else:
        correct_year = "Senior"
    
    print(f"A student with {credits} credits is not a {year}. You are a {correct_year}.")
