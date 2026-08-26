import random

print("🎮 Welcome to the Number Guessing Game!")
print("I have chosen a number between 1 and 100.")

number = random.randint(1, 100)
attempts = 0

while True:
    guess = int(input("\nEnter your guess: "))
    attempts += 1

    if guess > number:
        print("Too high! Try again.")
    elif guess < number:
        print("Too low! Try again.")
    else:
        print("\n🎉 Congratulations! You guessed the number!")
        print("You took", attempts, "attempts.")
        break