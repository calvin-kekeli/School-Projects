username =  input ("Enter username: ")
role = input ("Enter your role (admin/staff/guest): ")

if role == "admin":
    print ("==================================")
    print ("Access Granted! Full System Access")
    print ("==================================")
    print ("-Add Users")
    print ("-Remove Users")
    print ("-View records")
    print ("-Edit records")
    print ("-Delete records")
    print ("-Change system settings")
elif role == "staff":
    print ("=====================================")
    print ("Access Granted! Limited System Access")
    print ("=====================================")
    print ("-View records")
    print ("-Edit records")
    print ("-Delete records")
    print ("-Change system settings")
elif role == "guest" :
    print ("=================================")
    print ("Access Granted! Read Only Access")
    print ("================================")
    print ("-You can only view records.")
else :
    print ("Contact admin for support!")