from pylgbst.hub import MoveHub
from pylgbst.comms.cbluepy import BluepyConnection
import pylgbst
import time

print("Hello")

conn = BluepyConnection()
conn.connect(hub_mac='00:16:53:b7:8c:b1')
#print("Connected")
#hub=MoveHub()
hub=MoveHub(conn)

#from pylgbst.hub import MoveHub
#from pylgbst.comms.cgatt import GattConnection

#conn = GattConnection("hci1")
#conn = pylgbst.get_connection_auto()
#conn.connect(hub_mac='00:16:53:b7:8c:b1')  # you can pass Hub mac address as parameter here, like 'AA:BB:CC:DD:EE:FF'

#hub = MoveHub(conn)

print("Define")

    
hub.motor_A.start_speed(0.2, 1)
hub.motor_B.start_speed(0.3, 1.1)

time.sleep(10)
hub.motor_A.stop()
hub.motor_B.stop()


