#14-04-2022
#WiFi-Cracker

import os

WIFIs=os.listdir("WiFi-key")

open("All_WIFI_logs.txt", "w").close()

for i in WIFIs:
    file=open(f"WiFi-Key/{i}", "r")
    reading=file.read()
    reading=reading.split('<')
    wifi_name=reading[3].replace("name>", "")
    wifi_password=reading[-12].replace("keyMaterial>", "")
    print(f"WIFI Name: {wifi_name}\nWIFI Password: {wifi_password}")
    logs=open("All_WIFI_logs.txt", "a")
    logs.write(f"Name: {wifi_name}\nPassword: {wifi_password}\n________________________________________________________________\n\n")
    file.close()
logs.close()