FROM ubuntu:latest

RUN mkdir /root/.ssh

COPY ./.gitconfig /root/.gitconfig

COPY ./id_rsa /root/.ssh/id_rsa
COPY ./id_rsa.pub /root/.ssh/id_rsa.pub

RUN apt-get update && apt-get install -y zsh git vim strace curl wget make clang

RUN ssh-keyscan -t rsa github.com >> /root/.ssh/known_hosts

RUN wget https://github.com/robbyrussell/oh-my-zsh/raw/master/tools/install.sh -O - | bash || true

RUN git clone https://github.com/reversTeam/Sublivim.git /tmp/subl

RUN cd /tmp/subl && sh /tmp/subl/installer.sh

RUN git clone git@github.com:Z1NZ/STrace.git /root/strace
RUN cd /root/strace && git pull

WORKDIR /root/42_ft_strace
