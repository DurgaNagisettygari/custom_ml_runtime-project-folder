FROM amazonlinux
RUN yum install -y gcc-c++
COPY runtime.cpp .
RUN g++ runtime.cpp -o runtime
CMD ["./runtime"]