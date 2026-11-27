CREATE TABLE employees (
    id INT PRIMARY KEY,
    name VARCHAR(100),
    department VARCHAR(50),
    salary DECIMAL(10, 2)
);

INSERT INTO employees
VALUES (1, 'John', 'Engineering', 45000);

INSERT INTO employees
VALUES (2, 'David', 'Marketing', 35000);

INSERT INTO employees
VALUES (3, 'Alex', 'Engineering', 50000);

SELECT * FROM employees;

UPDATE employees
SET salary = 60000;

DELETE FROM employees;

SELECT * FROM employees
WHERE department = 'Engineering';

SELECT * FROM employees
WHERE department = 'Engineering';

DELETE FROM employees
WHERE 1 = 1;

DROP TABLE employees;
