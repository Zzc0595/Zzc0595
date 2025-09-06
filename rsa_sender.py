n=input("Enter private key n: ")
e=input("Enter private key e: ")
m=input("Enter your message: ") #input message
c = pow(int(m),int(e),int(n)) #generate ciphertext
print(f"The ciephertext has generated.\nPlease tell the reciever the ciephertext is: {c}")