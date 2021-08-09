import requests,sys
from requests.structures import CaseInsensitiveDict

url = "https://api.mercadopago.com/instore/qr/seller/collectors/774407572/stores/EMPOS/pos/EMPOS001/orders"

#Variables
total_amount = sys.argv[1]
unit_price = total_amount
external_reference_id = sys.argv[2]
payment_type = sys.argv[3]


if payment_type == "qr":
    notification_url = " /qr"
elif payment_type == "credit":
    notification_url = " /credit"

#total_amount = 150
#unit_price = total_amount
#external_reference_id = 6

#Headers
headers = CaseInsensitiveDict()
headers["Content-Type"]="application/json"
headers["Authorization"] = "Bearer TEST-6276998153361564-061323-c67a08cf105c6c3de44b262d5313348e-774407572"

data = """
{
    "external_reference": "EMPOS""" + str(external_reference_id) + """",
    "total_amount": """ + str(total_amount) + """,
    "notification_url": """ + str(notification_url) + """,
    "items": [
        {
            "sku_number": "KS955RUR",
            "category": "SUPERMERCADO",
            "title": "Producto de Supermercado",
            "description": "Compra con QR",
            "quantity": 1,
            "unit_measure": "unit",
            "unit_price": """ + str(unit_price) + """,
            "total_amount": """ + str(total_amount) + """
        }
    ],
    "title": "Compra en Super",
    "description": "El mejor super"
}
"""


resp = requests.put(url, headers=headers, data=data)

print(resp.status_code)
