# Registers en slave-adressen I2C uitleg

In overleg met de projectleiders is er besloten welke data in welk register komt.\

De slave-adressen van de aandrijving en belasting zijn:

**Aandrijving:** 0x06

**Belasting:** 0x09

Hieronder uitleg over bepaalde begrippen die in eerste instantie misschien niet duidelijk zijn:

??? note "Wat wordt er bedoeld met een register en waarvoor is het nodig?"
    Bij I2C communicatie is er altijd een master en een slave apparaat. 
    Waarbij de master beslist met welk apparaat er gesproken wordt. De slave heeft hier geen zeggenschap over. De enige taak van een slave apparaat is reageren als een stuk aanroepbaar geheugen. Het stuk aanroepbaar geheugen van de slave is onderverdeeld in een aantal geheugenplaatsen deze geheugenplaatsen worden registers genoemd. Deze registers houden in dit geval 2 bytes (16-bits waarden). Naar deze geheugenplaatsen kan door het master apparaat geschreven of gelezen worden.
    Het speciferen naar welk register de master wil schrijven of lezen geeft de master aan met een verzoek aan het slave-apparaat. 
    Vervolgens krijgt de master of de data opgestuurd of zet de master zelf de data op de databus afhankelijk of het een schrijf- of leesverzoek is.
        
    Deze registers zijn van belang omdat er bij de communicatie tussen de onderdelen I2C wordt gebruikt. Waarbij het onderdeel MCU de master is en de belasting en aandrijving de slaves. Elk register heeft specifieke informatie: rendement, vermogen DUT, enz. In welke register welke informatie staat, wordt beschreven in een **register map**.
        
??? note "Wat wordt er bedoeld met register 0 - register n bij de registermap"
    Als er een I2C transactie gemaakt moet worden, wordt als eerste het slave adres opgestuurd en vervolgens 
    in een aparte schrijfcyclus het registernummer waar uit gelezen wordt of naartoe geschreven moet worden.
    Het registernummer dat in de cyclus geschreven moet worden is gelijk aan het registernummer dat in de titel staat. 
         
         
    Bijvoorbeeld:
         
    ** Als er in de registermap staat:**
        
    Register 2: Stroom aandrijving
         
    En ik zou de stroom van de aandrijving willen lezen dan moet ik registernummer 2 opsturen.
    

        
