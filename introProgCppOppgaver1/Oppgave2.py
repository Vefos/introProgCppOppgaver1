
import random
import os	
	
	


	
	
numberOfGuesses = 1	
isRunning = True
randomTall = random.randint(1, 10)
	
print ("Gjett på et tall mellom 1 og 10\n>> ")
	
	
while (isRunning):
    guess = int( input() )
    
    if (numberOfGuesses < 3):
   
        if (guess == randomTall):
            print ("Du gjettet riktig")
            isRunning = False

        elif(guess < randomTall):

            numberOfGuesses = numberOfGuesses + 1
            print ("Du gjettet for lavt\n")
            print ("Gjett igjen: ")	
            

        elif (guess > randomTall):	
            numberOfGuesses = numberOfGuesses + 1
            print ("Du gjettet for høyt\n")
            print ("Gjett igjen: ")		
            										
    else:
        print ("DU har gjettet feil for mange ganger\n\n")
        print ("GAME OVER\n\n")
        isRunning = False
	
	

