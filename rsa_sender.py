n=input("Enter private key n: ")
e=input("Enter private key e: ")
m=input("Enter your message: ") #input message
if int(m) > int(n):
    print(f"The message can't be bigger than 'n'-{n}.Some of the message would be lost.")
c = pow(int(m),int(e),int(n)) #generate ciphertext
print(f"The ciephertext has generated.\nPlease tell the reciever the ciephertext is: {c}")