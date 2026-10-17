# Number Guessing Game in C 🎯

A simple, interactive terminal-based game built in C. The program generates a pseudo-random number between 1 and 100, and the player attempts to guess it with helpful directional hints along the way.

---

## 🎮 How It Works

1. The game seeds the random number generator using the system clock (`time(NULL)`).
2. It picks a secret integer between **1 and 100**.
3. You enter your guess in the console:
   - If your guess is too low, the game prompts: `Guess a larger number`
   - If your guess is too high, the game prompts: `Guess a smaller number`
4. When you guess correctly, the game reveals the total number of attempts taken!

---

## 🛠️ Features

- **Pseudo-random Number Generation:** Implemented using `rand()` and `srand(time(NULL))`.
- **Interactive Loop:** Uses a `do-while` loop to continuously accept guesses until the target number is matched.
- **Score Tracking:** Keeps count of every attempt to measure performance.

---

## 💻 How to Compile and Run

### Prerequisites
- A C compiler like **GCC** (via MinGW on Windows, or default on Linux/macOS).

### Steps

1. **Clone the repository:**
   ```bash
   git clone [https://github.com/YOUR-USERNAME/YOUR-REPO-NAME.git](https://github.com/YOUR-USERNAME/YOUR-REPO-NAME.git)
   cd YOUR-REPO-NAME
