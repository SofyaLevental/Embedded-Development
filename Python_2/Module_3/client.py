import http.client as httplib

conn = httplib.HTTPConnection("www.uci.edu")
conn.request("GET","/")
response = conn.getresponse()
text = response.read()
print(text)
conn.close()
    