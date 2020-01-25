from bluepy import btle

scanner = btle.Scanner()
devices = scanner.scan()
print(len(devices))
for device in devices:
    print(device.getScanData(), device.addr)