<h2 align="center">Worm.c</h2>

<i> Simple code example for creating a Worm Virus </i>

<p align="center"><a href="https://github.com/Sasser1337/Worm/stargazers"><img src="https://img.shields.io/github/stars/Sasser1337/Worm" alt="Stars Badge"/></a> <a align="center">
<a href="https://github.com/Sasser1337/awesome-github-profile-readme/network/members"><img src="https://img.shields.io/github/forks/Sasser1337/Worm" alt="Forks Badge"/></a> <a align="center">
<a href="https://github.com/Sasser1337/Worm/blob/master/LICENSE"><img src="https://img.shields.io/github/license/Sasser1337/Worm?color=2b9348" alt="License Badge"/></a> <a align="center">

<i> This program works with two deployment methods </i>

<h2> Network Spreading: </h2>

<i> The program begins by attempting to obtain a list of computers connected to the local network by executing the `net view` command on the host system. </i>

<i> After obtaining a list of computers on the network, the program tries to copy a copy of itself (WormMalware.exe) to the `C:\Windows\System32` directory on each computer in the list using the "copy" command.

<i> It then attempts to execute this copy of itself on those computers using the "start" command. </i>

<h2> Email Spreading: </h2>

<i> The program attempts to obtain a list of email addresses from the current directory using the `dir /b` command. </i>

<i> It then tries to send a copy of itself (WormMalware.exe) to each email address in the list using the `sendmail` command. </i>

