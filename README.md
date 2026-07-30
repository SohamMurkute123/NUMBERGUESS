# 🎯 Number Guessing Game (C++)

A simple console-based **Number Guessing Game** developed in **C++**. The program generates a random number, and the player has to guess it with hints provided after each attempt.

## 📌 Features

- 🎲 Random number generation
- 💡 Hints after every guess
  - Too High
  - Too Low
- 🏆 Displays the number of attempts
- 🖥️ Easy-to-use console interface
- ⚡ Beginner-friendly C++ project

## 🛠️ Technologies Used

- C++
- Standard Library (`iostream`, `cstdlib`, `ctime`)

## 🚀 How It Works

1. The program generates a random number.
2. The player enters a guess.
3. The program checks the guess:
   - If the guess is too high, it displays **"Too High!"**
   - If the guess is too low, it displays **"Too Low!"**
4. The game continues until the correct number is guessed.
5. The total number of attempts is displayed.

## 📂 Project Structure

```
Number-Guessing-Game/
│── main.cpp
│── README.md
```

## ▶️ How to Run

### Compile

```bash
g++ main.cpp -o game
```

### Run

```bash
./game
```

**For Windows:**

```bash
game.exe
```

## 📸 Sample Output

```text
Welcome to Number Guessing Game!

Guess a number between 1 and 100: 50
Too Low!

Guess a number: 75
Too High!

Guess a number: 68
Congratulations!
You guessed the correct number in 3 attempts.
```

## 🎯 Future Improvements

- Multiple difficulty levels
- Score system
- Limited number of attempts
- Play Again option
- Timer mode
- Leaderboard

## 🤝 Contributing

Contributions are welcome! Feel free to fork this repository and submit a pull request.

## 📜 License

This project is open-source and available under the **MIT License**.

---

⭐ If you found this project helpful, consider giving it a **Star** on GitHub!
