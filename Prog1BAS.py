'''
Beau Simon
beau.a.simon@und.edu
Assignment #1 - Python

This is our first assignment for CSCI 265. This is the Python portion.
'''
#First task was to print out an address in various forms

print ("Asking the user for the address that will be printed out")

# Prompt the user for address information
first_name = input("Enter your first name (up to 12 characters): ")
last_name = input("Enter your last name (up to 12 characters): ")
address = input("Enter your address (up to 25 characters): ")
city = input("Enter your city (up to 15 characters): ")
state = input("Enter your state (2 characters): ")
zip_code = input("Enter your zip code (5 characters): ")

# Print the mailing label using only 1 print statement
print(f"{first_name} {last_name} \n{address} \n{city}, {state}  {zip_code}\n")


# Print the mailing label using exactly 3 print statements
print(first_name, last_name, sep=" ")
print(address)
print(f"{city}, {state}  {zip_code}", end="\n\n")

# Print the mailing label using exactly 6 print statements
print(first_name, end=" ")
print(last_name)
print(address)
print(city, end=", ")
print(state, end="  ")
print(zip_code, end="\n\n")

print("The following section will convert milliseconds into minutes, seconds and milliseconds \n")

# Prompt the user to enter the number of milliseconds
milliseconds = int(input("Enter the number of milliseconds: "))

# Calculate minutes, seconds, and remaining milliseconds
minutes = milliseconds // 60000
seconds = (milliseconds % 60000) // 1000
remaining_milliseconds = milliseconds % 1000

# Display the converted time
print("Milliseconds:", milliseconds)
print(f"This is {minutes} minute(s), {seconds} second(s), and {remaining_milliseconds} millisecond(s).\n")

print("The following program will convert a number of coins into its amount in dollars \n")

# Prompt the user for the number of coins
quarters = int(input("Enter the number of quarters: "))
dimes = int(input("Enter the number of dimes: "))
nickels = int(input("Enter the number of nickels: "))
pennies = int(input("Enter the number of pennies: "))

# Calculate the total amount in dollars and cents
total_cents = (quarters * 25) + (dimes * 10) + (nickels * 5) + pennies
dollars = total_cents // 100
cents = total_cents % 100

# Display the equivalent amount in dollars and cents
print(f"This is equal to ${dollars}.{cents:02}")
