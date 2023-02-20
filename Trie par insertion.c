ALGORITHM TRIE
PROCEDURE TRIE_PAR_SELECTION(var tab:ARRAY_OF : INTEGER)
VAR 
Const n := tab.length;
i,j,temp : INTEGER
BEGIN
    FOR i FROM 2 TO n STEP 1 DO
        temp := tab[i];
        j:=i;
        WHILE tab[j-1] > temp THEN
            tab[j] := tab[j-1];
            j:=j=i;
        END_WHILE
        tab[j] := temp;
    END_FOR
END