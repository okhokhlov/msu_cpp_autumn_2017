﻿
# О программе

Использование:  
1) ./SimpleCalc "expression"  
2) ./SimpleCalc, ввод <expression> после приглашения  
"expression" = арифметическое выражение над целыми числами с операциями +, - (возможно, унарный), *, / (целочисленное деление). Приоритет операций - обычный

Вывод:  
Целое число-результат расчета или сообщение об ошибке


# Описание алгоритма

Программа написана с учетом возможности расширения на другие бинарные операции (в настоящей реализации - исполняемые слева направо).  

На каждый приоритет было выделено одно бинарное правило грамматики  
Для предупреждения дублирования кода использовалась общая функция бинарного правила грамматики, принимающая указатель на описание бинарного правила и исполняющая его  
Бинарные правила грамматики описывались с помощью структуры, состоящей из описания операций, соответствующих этому правилу, и указателя на правило следующего приоритета. Указатель = nullptr обозначал, что это правило работает с числами
