CREATE TABLE employees (
    employee_id INT PRIMARY KEY,
    employee_name VARCHAR(100),
    department VARCHAR(50),
    salary DECIMAL(10, 2)
);

INSERT INTO employees
VALUES (1, 'John', 'Engineering', 55000);

INSERT INTO employees
VALUES (2, 'David', 'Marketing', 42000);

INSERT INTO employees
VALUES (3, 'Sarah', 'Finance', 60000);

SELECT * FROM employees;

SELECT * FROM employees
WHERE department = 'Engineering';

SELECT employee_name, salary
FROM employees
ORDER BY salary DESC;

UPDATE employees
SET salary = 58000
WHERE employee_id = 1;

SELECT department, AVG(salary)
FROM employees
GROUP BY department;
