import string
import secrets

def generate_strong_password(length=12):
    # Define the character set for the password
    alphabet = string.ascii_letters + string.digits + string.punctuation

    # Securely select characters randomly from the defined set
    password = ''.join(secrets.choice(alphabet) for _ in range(length))

    return password

# Example usage
password = generate_strong_password(16)  # Generate a password of length 16
print("Generated Password:", password)
