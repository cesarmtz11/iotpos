import requests
from requests.structures import CaseInsensitiveDict

url = "https://api.mercadopago.com/users/774407572/stores"

headers = CaseInsensitiveDict()
headers["Authorization"] = "Bearer TEST-6276998153361564-061323-c67a08cf105c6c3de44b262d5313348e-774407572"

data = """
{
    "name":"EPOS2",
    "business_hours":{"monday":[{"open":"00:01","close":"23:58"}],
                      "tuesday":[{"open":"00:01","close":"23:58"}],
                      "wednesday":[{"open":"00:01","close":"23:58"}],
                      "thursday":[{"open":"00:01","close":"23:58"}],
                      "friday":[{"open":"00:01","close":"23:58"}],
                      "saturday":[{"open":"00:01","close":"23:58"}],
                      "sunday":[{"open":"00:01","close":"23:58"}]},
    "location":{"street_number":"571",
                "street_name":"Marina Vallarta",
                "city_name":"Zapopan",
                "state_name":"Jalisco",
                "latitude":20.7422842,
                "longitude":-103.417968,
                "reference":"1er Piso"},
    "external_id":"EPOS001"}
"""

resp = requests.post(url, headers=headers, data=data)

print(resp.status_code)
print(resp.json())
