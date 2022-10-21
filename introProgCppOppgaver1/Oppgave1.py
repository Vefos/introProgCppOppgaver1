from os import system
import random


def calc_computer_move():
    computerMove = random.randint(1, 3)
    return computerMove

def main():
    # random action
    # 1 = rock,
    # 2 = paper,
    # 3 = scissors

    isRunning = True

    computerWins = 0

    playerWins = 0

    # Best of of three

    while isRunning:

        if computerWins == 3:
            print("GAME OVER! Computer is the champ!", end = '')
            print("\n", end = '')
            isRunning = False
            break

        if playerWins == 3:
            print("GLORIOUS VICTORY! Player wins!", end = '')
            print("\n", end = '')
            isRunning = False
            break

        computerMove = calc_computer_move()

        print("---------------------------------------", end = '')
        print("\n\n", end = '')
        print("ROCK, PAPER, SCISSORS", end = '')
        print("\n\n", end = '')
        print("---------------------------------------", end = '')
        print("\n\n", end = '')
        print("Score: Player ", end = '')
        print(playerWins, end = '')
        print("\tComputer: ", end = '')
        print(computerWins, end = '')
        print("\n", end = '')
        print("---------------------------------------", end = '')
        print("\n\n\n", end = '')
        print("Make your choice: \n", end = '')
        print("1. Rock\n", end = '')
        print("2. Paper\n", end = '')
        print("3. Scissors\n\n\n>> ", end = '')

        playerMove = int( input("velg move: ") )

        system("CLS")

        # Rock beats scissors
        # Paper beats rock
        # Scissors beats paper

        if computerMove == playerMove:
            print("Draw, you made the same move. Try again.", end = '')
            print("\n", end = '')

        elif computerMove == 1 and playerMove == 2:
            print("Player wins, paper beats rock!", end = '')

            print("\n", end = '')

            playerWins += 1

        elif computerMove == 1 and playerMove == 3:
            print("Computer wins, rock beats scissors!", end = '')
            print("\n", end = '')

            computerWins += 1

        elif computerMove == 2 and playerMove == 1:

            print("Computer wins, paper beats rock!", end = '')
            print("\n", end = '')

            computerWins += 1

        elif computerMove == 2 and playerMove == 3:

            print("Player wins, scissors beats paper", end = '')
            print("\n", end = '')

            playerWins += 1

        elif computerMove == 3 and playerMove == 1:

            print("Player wins, rock beats scissors", end = '')
            print("\n", end = '')

            playerWins += 1

        elif computerMove == 3 and playerMove == 2:

            print("Computer wins, scissors beats paper", end = '')
            print("\n", end = '')

            computerWins += 1



if __name__ == "__main__":
   main()