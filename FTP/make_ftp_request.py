import ftplib

get_all_folder_id = []

with ftplib.FTP('logs.4netplayers.de') as ftp:
    ftp.login(user='195.4.17.196', passwd='R$e7T9*pZ2')
    ftp.cwd("/1054444")
    get_all_folder_id_temp = []
    ftp.dir(get_all_folder_id_temp.append)

    for line in get_all_folder_id_temp:
        trimmed_line = line[-12:].strip()
        get_all_folder_id.append(trimmed_line)


get_all_folder_id_numbers = [int(x) for x in get_all_folder_id]
highest_number = max(get_all_folder_id_numbers)

with ftplib.FTP('logs.4netplayers.de', '195.4.17.196', 'R$e7T9*pZ2') as ftp:
     ftp.dir("/1054444/{}/server".format(highest_number))
     

with ftplib.FTP('logs.4netplayers.de') as ftp:
    ftp.login(user='195.4.17.196', passwd='R$e7T9*pZ2')
    ftp.cwd("/1054444/{}/server".format(highest_number))
    ftp.dir()