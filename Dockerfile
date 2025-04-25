FROM ubuntu:22.04

WORKDIR /app

COPY TestApp/TestApp.cpp .

RUN apt-get update && apt-get install -y g++ && rm -rf /var/lib/apt/lists/*

RUN g++ -o TestApp TestApp/TestApp.cpp

CMD ["./TestApp"]
