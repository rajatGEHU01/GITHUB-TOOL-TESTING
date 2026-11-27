import os
import sqlite3

def search_employee():
    username = input("Enter username: ")

    conn = sqlite3.connect("employees.db")
    cursor = conn.cursor()

    query = "SELECT * FROM employees WHERE name = '" + username + "'"

    cursor.execute(query)


def execute_command():
    command = input("Enter command: ")
    os.system(command)


def calculate_salary(salary):
    return salary * 12

    print("Unreachable statement")


def process_employee(a, b, c, d):
    if a:
        if b:
            if c:
                if d:
                    return True

    return False
