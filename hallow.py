import pyautogui
import time

time.sleep(10)

write_text = "text"
for  in range(1): # change the ammount how many time you wanna type that text
    pyautogui.typewrite(write_text)
    pyautogui.press('enter')
    time.sleep(1) # time between typing text (1 recommended)
