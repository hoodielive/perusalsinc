import socket
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.connect(('localhost', 4242))
s.send('Hi, I am utilizing python')
data = s.recv(4096)
s.close()
print('Recieved', 'data')
