# Value Added 2 — Student Performance Analytics Dashboard

Use `../../03-Excel/Practical-6-Excel-Analysis/marks.csv` as a starter dataset.

## Dashboard components
- KPI cards: number of students, class average, highest average, pass percentage.
- Clustered column chart: compare subject averages.
- Bar chart: total/average by student.
- Conditional formatting: low and high performance.
- Data validation: restrict marks to values from 0 to 100.
- PivotTable: summarize average marks by subject and student.

## Useful formulas
- Total: `=SUM(C2:E2)`
- Average: `=AVERAGE(C2:E2)`
- Status: `=IF(G2>=40,"Pass","Needs Improvement")`
- Pass percentage: `=COUNTIF(H2:H9,"Pass")/COUNTA(B2:B9)*100`

## Procedure
Import the CSV, add formulas, format the range as a table, add conditional formatting, create charts and a PivotTable, then place summary cards and charts on a separate Dashboard worksheet.
