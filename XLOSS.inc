* PARAMETER XLOSS contains the loss in transmission is expressed as a fraction                                                                                                                              
* of the power entering the transmission line.                                                                                                                                                              
* Units: (none)                                                                                                                                                                                             
* The input data are checked for reasonable values. See the file CHECK0.INC.                                                                                                                                
                                                                                                                                                                                                            
                                                                                                                                                                                                            
* Observe: Unreasonable results may be found if there are neither                                                                                                                                           
* cost nor loss associated with electrical transmission.                                                                                                                                                    
* Therefore for all (non-diagonal) entries there should be a positive number                                                                                                                                
* in either TABLE XCOST or in TABLE XLOSS.                                                                                                                                                                  
                                                                                                                                                                                                            
* Data source:                                                                                                                                                                                              
                                                                                                                                                                                                            
* The data entered assumes for simplicity that all transmission losses                                                                                                                                      
* between regions RE and RI are the same in both directions.                                                                                                                                                
* Therefore the loss data is given only once.                                                                                                                                                               
* It is therefore by convention assumed that loss data between regions RE and RI                                                                                                                            
* is given only for ORD(RE) LT ORD(RI), i.e. data is entered                                                                                                                                                
* only in the upper right half of the table; the remaining data                                                                                                                                             
* is filled in by the LOOP statement immediately after the table.                                                                                                                                           
                                                                                                                                                                                                            
* (If this assumption is not found reasonable upon revision of the data,                                                                                                                                    
* then fill in the whole table,                                                                                                                                                                             
* and delete the fill-in LOOP statement immediately after the table.)                                                                                                                                       
                                                                                                                                                                                                            
TABLE XLOSS(IRRRE,IRRRI)  'Transmission loss between regions (fraction)'                                                                                                                                    
                                                                                          DK1   DK2   FIN   GER   NE    NO1   NO2   NO3   NO4   NO5   SE1   SE2   SE3   SE4   UK    EE    LV    LT    PL    
DK1                                                                                       0     0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 
DK2                                                                                       0.042 0     0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 
FIN                                                                                       0.042 0.042 0     0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 
GER                                                                                       0.042 0.042 0.042 0     0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 
NE                                                                                        0.042 0.042 0.042 0.042 0     0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 
NO1                                                                                       0.042 0.042 0.042 0.042 0.042 0     0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 
NO2                                                                                       0.042 0.042 0.042 0.042 0.042 0.042 0     0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 
NO3                                                                                       0.042 0.042 0.042 0.042 0.042 0.042 0.042 0     0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 
NO4                                                                                       0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0     0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 
NO5                                                                                       0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0     0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 
SE1                                                                                       0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0     0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 
SE2                                                                                       0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0     0.042 0.042 0.042 0.042 0.042 0.042 0.042 
SE3                                                                                       0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0     0.042 0.042 0.042 0.042 0.042 0.042 
SE4                                                                                       0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0     0.042 0.042 0.042 0.042 0.042 
UK                                                                                        0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0     0.042 0.042 0.042 0.042 
EE                                                                                        0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0     0.042 0.042 0.042 
LV                                                                                        0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0     0.042 0.042 
LT                                                                                        0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0     0.042 
PL                                                                                        0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0.042 0     
;                                                                                                                                                                                                           
                                                                                                                                                                                                            
                                                                                                                                                                                                            
* Then fill in the values not entered in the table assuming symmetry:                                                                                                                                       
LOOP( (IRRRE,IRRRI)$(ORD(IRRRE) GT ORD(IRRRI)),  XLOSS(IRRRE,IRRRI)=XLOSS(IRRRI,IRRRE););                                                                                                                   