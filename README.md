# Custom ML Runtime Infrastructure for Cloud Inference

## Overview
This project demonstrates a minimal runtime built in C++ for executing ML workloads in a serverless cloud environment using AWS Lambda. It simulates inference operations and is designed for low-latency, lightweight deployments.

## Structure
- `runtime.cpp`: Simulates inference using basic vector operations.
- `Dockerfile`: Builds the runtime using Amazon Linux and compiles the C++ code.
- `lambda_handler.py`: AWS Lambda function to run the compiled binary.
- `requirements.txt`: No external packages required.

## Usage
1. Build the Docker container:
   ```bash
   docker build -t custom-ml-runtime .
   ```

2. Run locally for testing:
   ```bash
   docker run --rm custom-ml-runtime
   ```

3. Deploy to AWS Lambda using container image support.