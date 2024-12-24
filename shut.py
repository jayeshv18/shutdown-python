import os
import platform

def shutdown_pc():
    current_os = platform.system()  # Detect the operating system

    if current_os == "Windows":
        os.system("shutdown /s /t 1")  # Shutdown Windows PC immediately
    else:
        print(f"Shutdown command not supported on {current_os}")

if __name__ == "__main__":  #checking for script running on main
    shutdown_pc()
