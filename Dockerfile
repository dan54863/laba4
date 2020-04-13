FROM ubuntu
COPY ./la41.cpp .
COPY ./la4.cpp .
COPY ./123.txt .
RUN apt update
RUN apt install -y vim
RUN apt install -y build-essential

