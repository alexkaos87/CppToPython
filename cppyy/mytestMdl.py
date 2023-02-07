import cppyy

cppyy.load_library("/home/alessio/MDL/MDL/lib/libMDL.so")

cppyy.add_include_path("/home/alessio/MDL/MDL/include/")
cppyy.include("Mdl/Data/Msg/SAE/HCI_SAE_ManageAlarm.h")

class1 = cppyy.gbl.MDL.SAE.HCI_SAE_ManageAlarm()

