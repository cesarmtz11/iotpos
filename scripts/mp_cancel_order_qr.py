import requests
from requests.structures import CaseInsensitiveDict

url = "https://api.mercadopago.com/instore/qr/seller/collectors/774407572/pos/EMPOS001/orders"

headers = CaseInsensitiveDict()
headers["Authorization"] = "Bearer TEST-6276998153361564-061323-c67a08cf105c6c3de44b262d5313348e-774407572"


resp = requests.delete(url, headers=headers)

print(resp.status_code)

