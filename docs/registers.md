# Registers en slave-adressen I2C

In overleg met de projectleiders is er besloten welke data in wel register komt.

!!! note "Wat wordt er bedoeld met een register en waarvoor is het nodig?"
        Bij I2C communicatie is er altijd een master en een slave apparaat. 
        Waarbij de master beslist met welk apparaat er gesproken wordt. De slave heeft hier geen zeggenschap over. De enige taak van een slave apparaat is reageren als een stuk aanroepbaar geheugen. Het stuk aanroepbaar geheugen van de slave is onderverdeeld in een aantal geheugenplaatsen deze geheugenplaatsen worden registers genoemd. Deze registers houden in dit geval 2 bytes (16-bits waarden). Naar deze geheugenplaatsen kan door het master apparaat geschreven of gelezen worden.
        Het speciferen naar welk register de master wil schrijven of lezen geeft de master aan met een verzoek aan het slave-apparaat. 
        Vervolgens krijgt de master of de data opgestuurd of zet de master zelf de data op de databus afhankelijk of het een schrijf- of leesverzoek is.
        
        Deze registers zijn van belang omdat er bij de communicatie tussen de onderdelen I2C wordt gebruikt. Waarbij het onderdeel MCU de master is en de belasting en aandrijving de slaves. Elk register heeft specifieke informatie: rendement, vermogen DUT, enz. In welke register welke informatie staat wordt beschreven in een **register map**.
        
        
# Register map aandrijving
## **Register 0: Status aandrijving**
#### BIT:
<div class="RegisterTabel">
<div class="RegisterTabelBody">
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">15</div>
<div class="RegisterTabelLeeg">14</div>
<div class="RegisterTabelLeeg">13</div>
<div class="RegisterTabelLeeg">12</div>
<div class="RegisterTabelLeeg">11</div>
<div class="RegisterTabelLeeg">10</div>
<div class="RegisterTabelLeeg">9</div>
<div class="RegisterTabelLeeg">8</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
</div>
</div>
</div>
 
<div class="RegisterTabel">
<div class="RegisterTabelBody">
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">7</div>
<div class="RegisterTabelLeeg">6</div>
<div class="RegisterTabelLeeg">5</div>
<div class="RegisterTabelLeeg">4</div>
<div class="RegisterTabelLeeg">3</div>
<div class="RegisterTabelLeeg">2</div>
<div class="RegisterTabelLeeg">1</div>
<div class="RegisterTabelLeeg">0</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelTekst">Stat</div>
<div class="RegisterTabelTekst">Stat</div>
<div class="RegisterTabelTekst">Stat</div>
        </div>
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
</div>
</div>
</div>

###Stat [2:0] Status aandrijving
     
Mogelijke status:
      
- 0x01 (0b100): Overload
      
- 0x02 (0b010): Overvoltage
      
- 0x03 (0b110): Noodstop
        
- 0x04 (0b001): Gereed, wachtend op start signaal
       
- 0x05 (0b101): DUT (Device under test) / Actief
        
---
**RO= Read only**
      
**RW= Read/write**

&nbsp;

## **Register 1: Rendement aandrijving**
#### BIT:
<div class="RegisterTabel">
<div class="RegisterTabelBody">
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">15</div>
<div class="RegisterTabelLeeg">14</div>
<div class="RegisterTabelLeeg">13</div>
<div class="RegisterTabelLeeg">12</div>
<div class="RegisterTabelLeeg">11</div>
<div class="RegisterTabelLeeg">10</div>
<div class="RegisterTabelLeeg">9</div>
<div class="RegisterTabelLeeg">8</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
</div>
</div>
</div>
 
<div class="RegisterTabel">
<div class="RegisterTabelBody">
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">7</div>
<div class="RegisterTabelLeeg">6</div>
<div class="RegisterTabelLeeg">5</div>
<div class="RegisterTabelLeeg">4</div>
<div class="RegisterTabelLeeg">3</div>
<div class="RegisterTabelLeeg">2</div>
<div class="RegisterTabelLeeg">1</div>
<div class="RegisterTabelLeeg">0</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelTekst">Ren</div>
<div class="RegisterTabelTekst">Ren</div>
<div class="RegisterTabelTekst">Ren</div>
<div class="RegisterTabelTekst">Ren</div>
<div class="RegisterTabelTekst">Ren</div>
<div class="RegisterTabelTekst">Ren</div>
<div class="RegisterTabelTekst">Ren</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
</div>
</div>
</div>

### Ren [6:0] Rendement aandrijving 
        
Mogelijke waarden zijn theoretisch mogelijk van 0-127. 
Echter wordt alleen het bereik van 0-100(%) gebruikt.

---
**RO= Read only**
        
**RW= Read/write**

&nbsp;
## **Register 2: Stroom aandrijving**
<div class="RegisterTabel">
<div class="RegisterTabelBody">
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">15</div>
<div class="RegisterTabelLeeg">14</div>
<div class="RegisterTabelLeeg">13</div>
<div class="RegisterTabelLeeg">12</div>
<div class="RegisterTabelLeeg">11</div>
<div class="RegisterTabelLeeg">10</div>
<div class="RegisterTabelLeeg">9</div>
<div class="RegisterTabelLeeg">8</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelTekst">IA</div>
<div class="RegisterTabelTekst">IA</div>
<div class="RegisterTabelTekst">IA</div>
<div class="RegisterTabelTekst">IA</div>
<div class="RegisterTabelTekst">IA</div>
<div class="RegisterTabelTekst">IA</div>
<div class="RegisterTabelTekst">IA</div>
<div class="RegisterTabelTekst">IA</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
</div>
</div>
</div>
 
<div class="RegisterTabel">
<div class="RegisterTabelBody">
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">7</div>
<div class="RegisterTabelLeeg">6</div>
<div class="RegisterTabelLeeg">5</div>
<div class="RegisterTabelLeeg">4</div>
<div class="RegisterTabelLeeg">3</div>
<div class="RegisterTabelLeeg">2</div>
<div class="RegisterTabelLeeg">1</div>
<div class="RegisterTabelLeeg">0</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelTekst">IA</div>
<div class="RegisterTabelTekst">IA.</div>
<div class="RegisterTabelTekst">IA.</div>
<div class="RegisterTabelTekst">IA.</div>
<div class="RegisterTabelTekst">IA.</div>
<div class="RegisterTabelTekst">IA.</div>
<div class="RegisterTabelTekst">IA.</div>
<div class="RegisterTabelTekst">IA.</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
</div>
</div>
</div>
        
### IA [15:0] Stroom aandrijving    
        
Mogelijke waarden zijn 0-65635 (mA)
        
---
**RO= Read only**
        
**RW= Read/write**
&nbsp;
        
## **Register 3: Spanning aandrijving**
<div class="RegisterTabel">
<div class="RegisterTabelBody">
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">15</div>
<div class="RegisterTabelLeeg">14</div>
<div class="RegisterTabelLeeg">13</div>
<div class="RegisterTabelLeeg">12</div>
<div class="RegisterTabelLeeg">11</div>
<div class="RegisterTabelLeeg">10</div>
<div class="RegisterTabelLeeg">9</div>
<div class="RegisterTabelLeeg">8</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelTekst">UA</div>
<div class="RegisterTabelTekst">UA</div>
<div class="RegisterTabelTekst">UA</div>
<div class="RegisterTabelTekst">UA</div>
<div class="RegisterTabelTekst">UA</div>
<div class="RegisterTabelTekst">UA</div>
<div class="RegisterTabelTekst">UA</div>
<div class="RegisterTabelTekst">UA</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
</div>
</div>
</div>
 
<div class="RegisterTabel">
<div class="RegisterTabelBody">
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">7</div>
<div class="RegisterTabelLeeg">6</div>
<div class="RegisterTabelLeeg">5</div>
<div class="RegisterTabelLeeg">4</div>
<div class="RegisterTabelLeeg">3</div>
<div class="RegisterTabelLeeg">2</div>
<div class="RegisterTabelLeeg">1</div>
<div class="RegisterTabelLeeg">0</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelTekst">UA</div>
<div class="RegisterTabelTekst">UA.</div>
<div class="RegisterTabelTekst">UA.</div>
<div class="RegisterTabelTekst">UA.</div>
<div class="RegisterTabelTekst">UA.</div>
<div class="RegisterTabelTekst">UA.</div>
<div class="RegisterTabelTekst">UA.</div>
<div class="RegisterTabelTekst">UA.</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
</div>
</div>
</div>
        
### UA [15:0] Spanning aandrijving    
        
Mogelijke waarden zijn 0-15000 (mV)     
        
---
**RO= Read only**
       
**RW= Read/write**

---
## Register 4: Snelheid aandrijving
<div class="RegisterTabel">
<div class="RegisterTabelBody">
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">15</div>
<div class="RegisterTabelLeeg">14</div>
<div class="RegisterTabelLeeg">13</div>
<div class="RegisterTabelLeeg">12</div>
<div class="RegisterTabelLeeg">11</div>
<div class="RegisterTabelLeeg">10</div>
<div class="RegisterTabelLeeg">9</div>
<div class="RegisterTabelLeeg">8</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelTekst">Snl</div>
<div class="RegisterTabelTekst">Snl</div>
<div class="RegisterTabelTekst">Snl</div>
<div class="RegisterTabelTekst">Snl</div>
<div class="RegisterTabelTekst">Snl</div>
<div class="RegisterTabelTekst">Snl</div>
<div class="RegisterTabelTekst">Snl</div>
<div class="RegisterTabelTekst">Snl</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
</div>
</div>
</div>
 
<div class="RegisterTabel">
<div class="RegisterTabelBody">
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">7</div>
<div class="RegisterTabelLeeg">6</div>
<div class="RegisterTabelLeeg">5</div>
<div class="RegisterTabelLeeg">4</div>
<div class="RegisterTabelLeeg">3</div>
<div class="RegisterTabelLeeg">2</div>
<div class="RegisterTabelLeeg">1</div>
<div class="RegisterTabelLeeg">0</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelTekst">Snl</div>
<div class="RegisterTabelTekst">Snl</div>
<div class="RegisterTabelTekst">Snl</div>
<div class="RegisterTabelTekst">Snl</div>
<div class="RegisterTabelTekst">Snl</div>
<div class="RegisterTabelTekst">Snl</div>
<div class="RegisterTabelTekst">Snl</div>
<div class="RegisterTabelTekst">Snl</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
</div>
</div>
</div>
        
### Snl [15:0] Snelheid aandrijving    
        
Mogelijke waarden zijn 0-10000 (RPM)       
        
---
**RO= Read only**
        
**RW= Read/write**

        
## Register 5: Start register
<div class="RegisterTabel">
<div class="RegisterTabelBody">
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">15</div>
<div class="RegisterTabelLeeg">14</div>
<div class="RegisterTabelLeeg">13</div>
<div class="RegisterTabelLeeg">12</div>
<div class="RegisterTabelLeeg">11</div>
<div class="RegisterTabelLeeg">10</div>
<div class="RegisterTabelLeeg">9</div>
<div class="RegisterTabelLeeg">8</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
</div>
</div>
</div>
 
<div class="RegisterTabel">
<div class="RegisterTabelBody">
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">7</div>
<div class="RegisterTabelLeeg">6</div>
<div class="RegisterTabelLeeg">5</div>
<div class="RegisterTabelLeeg">4</div>
<div class="RegisterTabelLeeg">3</div>
<div class="RegisterTabelLeeg">2</div>
<div class="RegisterTabelLeeg">1</div>
<div class="RegisterTabelLeeg">0</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelnvt">&nbsp;</div>
<div class="RegisterTabelTekst">Start</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
</div>
</div>
</div>
        
### Snl [15:0] Snelheid aandrijving    
       
Mogelijke waarden zijn 0-10000 (RPM)       
        
---
**RO= Read only**
     
**RW= Read/write**
        
        
## Register 6: Maximale stroom setpoint
<div class="RegisterTabel">
<div class="RegisterTabelBody">
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">15</div>
<div class="RegisterTabelLeeg">14</div>
<div class="RegisterTabelLeeg">13</div>
<div class="RegisterTabelLeeg">12</div>
<div class="RegisterTabelLeeg">11</div>
<div class="RegisterTabelLeeg">10</div>
<div class="RegisterTabelLeeg">9</div>
<div class="RegisterTabelLeeg">8</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelTekst">Im</div>
<div class="RegisterTabelTekst">Im</div>
<div class="RegisterTabelTekst">Im</div>
<div class="RegisterTabelTekst">Im</div>
<div class="RegisterTabelTekst">Im</div>
<div class="RegisterTabelTekst">Im</div>
<div class="RegisterTabelTekst">Im</div>
<div class="RegisterTabelTekst">Im</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
<div class="RegisterTabelLeeg">R/W</div>
</div>
</div>
</div>
 
<div class="RegisterTabel">
<div class="RegisterTabelBody">
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">7</div>
<div class="RegisterTabelLeeg">6</div>
<div class="RegisterTabelLeeg">5</div>
<div class="RegisterTabelLeeg">4</div>
<div class="RegisterTabelLeeg">3</div>
<div class="RegisterTabelLeeg">2</div>
<div class="RegisterTabelLeeg">1</div>
<div class="RegisterTabelLeeg">0</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelTekst">Im</div>
<div class="RegisterTabelTekst">Im</div>
<div class="RegisterTabelTekst">Im</div>
<div class="RegisterTabelTekst">Im</div>
<div class="RegisterTabelTekst">Im</div>
<div class="RegisterTabelTekst">Im</div>
<div class="RegisterTabelTekst">Im</div>
<div class="RegisterTabelTekst">Im</div>
</div>
<div class="RegisterTabelRij">
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
<div class="RegisterTabelLeeg">RO</div>
</div>
</div>
</div>
        
### Snl [15:0] Snelheid aandrijving    
        
Mogelijke waarden zijn 0-10000 (RPM)
        
---
**RO= Read only**

**RW= Read/write**
