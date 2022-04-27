PARAMETER MFRRDOWN(YYY,CCCRRRAAA) 'MFRR down regulation requirement in each hour (MW)'
/
2016.DK1     0
2016.DK2     0
2016.FIN     0
2016.DE4-E   0
2016.DE4-N   0
2016.DE4-S   0
2016.DE4-W   0
2016.NL      0
2016.NO1     0
2016.NO2     0
2016.NO3     0
2016.NO4     0
2016.NO5     0
2016.SE1     0
2016.SE2     0
2016.SE3     0
2016.SE4     0
2016.UK      0
2016.EE      0
2016.LV      0
2016.LT      0
2016.PL      0
2016.BE      0
2016.FR      0

/;

MFRRDOWN(Y,CCCRRRAAA)= MFRRDOWN('2016',CCCRRRAAA) ;

*Assumptions for other countries:
MFRRDOWN(YYY,'IT')=MFRRDOWN(YYY,'FR');
MFRRDOWN(YYY,'ES')=MFRRDOWN(YYY,'FR');
MFRRDOWN(YYY,'CZ')=MFRRDOWN(YYY,'BE');
MFRRDOWN(YYY,'AT')=MFRRDOWN(YYY,'BE');
MFRRDOWN(YYY,'CH')=MFRRDOWN(YYY,'BE');
MFRRDOWN(YYY,'PT')=MFRRDOWN(YYY,'BE');