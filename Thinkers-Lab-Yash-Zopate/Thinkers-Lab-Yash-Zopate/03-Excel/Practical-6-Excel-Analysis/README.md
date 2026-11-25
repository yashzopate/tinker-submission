# Practical 6 — Excel Data Analysis and Reporting

## Aim
Analyze student marks using formulas, functions, charts, sorting, filtering and PivotTables.

## Suggested worksheet columns
A: RollNo · B: Name · C: Physics · D: Mathematics · E: Programming · F: Total · G: Average · H: Result

Assuming first student is in row 2:
- Total (F2): `=SUM(C2:E2)`
- Average (G2): `=AVERAGE(C2:E2)`
- Result (H2): `=IF(G2>=40,"Pass","Needs Improvement")`
- Highest average: `=MAX(G2:G9)`
- Class average: `=AVERAGE(G2:G9)`
- Count students: `=COUNTA(B2:B9)`

## Procedure
1. Import `marks.csv` into Excel.
2. Add the Total, Average and Result columns using the formulas above.
3. Fill formulas down for all students.
4. Format marks and averages to a consistent number of decimal places.
5. Convert the range to a Table with **Ctrl+T**.
6. Sort by Average from largest to smallest and filter by Result.
7. Insert a column chart comparing student averages.
8. Insert a PivotTable: Rows = Name; Values = Average of Physics, Mathematics and Programming.
9. Add conditional formatting to highlight averages below 40 and above 85.
10. Save as `Student-Performance-Analysis.xlsx`.

## Result
A student performance worksheet with calculated results, chart, filters and PivotTable is created.
