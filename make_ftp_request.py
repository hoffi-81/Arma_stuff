import ftplib
from dotenv import load_dotenv
import os 

load_dotenv()

USER =  os.getenv("USER")
PASSWORD = os.getenv("PASSWORD")

get_all_folder_id = []
url = "logs.4netplayers.de"


with ftplib.FTP(url) as ftp:
    ftp.login(user=USER, passwd=PASSWORD)
    ftp.cwd("/1054444")
    get_all_folder_id_temp = []
    ftp.dir(get_all_folder_id_temp.append)

    for line in get_all_folder_id_temp:
        trimmed_line = line[-12:].strip()
        get_all_folder_id.append(trimmed_line)


get_all_folder_id_numbers = [int(x) for x in get_all_folder_id]
highest_number = max(get_all_folder_id_numbers)

with ftplib.FTP(url, USER, PASSWORD) as ftp:
     ftp.dir("/1054444/{}/server".format(highest_number))
     

with ftplib.FTP(url) as ftp:
    ftp.login(user=USER, passwd=PASSWORD)
    ftp.cwd("/1054444/{}/server".format(highest_number))
    ftp.dir()
