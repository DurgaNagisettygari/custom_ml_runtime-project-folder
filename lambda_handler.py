import subprocess
import json

def lambda_handler(event, context):
    result = subprocess.run(["./runtime"], stdout=subprocess.PIPE)
    return {
        'statusCode': 200,
        'body': result.stdout.decode()
    }