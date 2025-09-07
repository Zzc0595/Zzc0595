from math import gcd
import random

prime = [101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479, 487, 491, 499, 503, 509, 521, 523, 541, 547, 557, 563, 569, 571, 577, 587, 593, 599, 601, 607, 613, 617, 619, 631, 641, 643, 647, 653, 659, 661, 673, 677, 683, 691, 701, 709, 719, 727, 733, 739, 743, 751, 757, 761, 769, 773, 787, 797, 809, 811, 821, 823, 827, 829, 839, 853, 857, 859, 863, 877, 881, 883, 887, 907, 911, 919, 929, 937, 941, 947, 953, 967, 971, 977, 983, 991, 997]

p = random.choice(prime)
q = random.choice(prime)
n = p * q
oln = (p - 1) * (q - 1)

def gnr(x):  # find a number for generating public key e, gcd(e, φ(n)) == 1
    while True:
        i = random.randint(2, x - 1)  # e应该在2到φ(n)-1之间
        if gcd(i, x) == 1:
            return i

# 修正：先生成公钥e，再计算私钥d
e = gnr(oln)  # public key exponent
d = pow(e, -1, oln)  # private key exponent

print(f"Please tell the sender, the public key pair (n, e) is ({n}, {e}).")
print("Sender use this key pair to code his message and send the ciphertext to here.")

c = int(input("Enter the cipher text: "))
m = pow(c, d, n)  # 用私钥d解密
print(f"The message is {m}")