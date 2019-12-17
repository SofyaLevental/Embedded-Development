import socket
import sys

my_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

try:
    my_socket.bind("")
except socket.error:
    print("Failed to bind")
    sys.exit()
my_socket.listen(5)
while True:
    conn, adress = my_socket.accept()
    data = conn.recv(1000)
    if not data:
        break
    print("data")

conn.close()
my_socket.close()