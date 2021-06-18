import requests,sys
import Tkinter
from requests.structures import CaseInsensitiveDict
#from Tkinter
import tkMessageBox

## Message box
parent = Tkinter.Tk()
parent.withdraw()

external_reference_id = sys.argv[1]
#external_reference_id = 11
url = "https://api.mercadopago.com/merchant_orders?external_reference=EMPOS"+ str(external_reference_id)+""

headers = CaseInsensitiveDict()
headers["Authorization"] = "Bearer TEST-6276998153361564-061323-c67a08cf105c6c3de44b262d5313348e-774407572"

print(url)
resp = requests.get(url, headers=headers)

print(resp.status_code)
a = resp.json()
print(a)

response = (a['elements'])
#payment_status = (a['elements'][0]['payments'][0]['status_detail'])

if response != None:
    payment_status = (a['elements'][0]['payments'][0]['status_detail'])
    if payment_status == 'accredited':
        print ('Pago aceptado')
        tkMessageBox.showinfo('Estado','Pago aceptado')    
else:
     tkMessageBox.showinfo('Estado','El pago no se ha realizado')
     print ('No hay pago')
    
#else:
#    tkMessageBox.showinfo('Estado','Pago rechazado')
#    print ('No hay pago')
print(a)
print(payment_status)