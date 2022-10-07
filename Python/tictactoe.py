def printGame(board):
    print("-------        ")
    print("|{}|{}|{}| (1,2,3)".format(board[0], board[1], board[2]))
    print("|{}|{}|{}| (4,5,6)".format(board[3], board[4], board[5]))
    print("|{}|{}|{}| (7,8,9)".format(board[6], board[7], board[8]))
    print("-------        ")

def isInt(s):
    try:
        int(s)
        return True
    except ValueError:
        return False

def place(board, what, where):
    board[where] = what

def placeComputer(board):
    for position, value in enumerate(board):
        if value == " ":
            return position

    return False

def checkIfWinnerOrTie(board):
    # pylint: disable=unused-argument
    print("(Checking for winner or tie is not yet implemented)")

def main():
    # Create a list of nine spaces
    board = [" "] * 9

    print("Play against the computer.")
    print("You start, you are X. Computer is O.")
    print("Three in a row wins.")

    while 1:

        printGame(board)

        position = input("Enter position (1-9) to place you X (or q for quit): ")

        if position == "q":
            break

        elif isInt(position):
            # User move
            place(board, "X", int(position) - 1)
            
            # Computer move
            computerPos = placeComputer(board)
            if computerPos is not False:
                place(board, "O", computerPos)
                print("Computer moved to {}.".format(computerPos))

        if checkIfWinnerOrTie(board) is True:
            break


if __name__ == "__main__":
    input("Press enter to continue.")
    main()
