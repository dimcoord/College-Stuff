clc; clearvars;
pkg load control;

kp = 6500;
ki = 0.65;
kd = 650;
num = [ki kd kp];
den = [(1 + ki) (10+kd) (20+kp)];

step(tf(num, den));
grid on;
