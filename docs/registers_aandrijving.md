        
# Register map aandrijving (I2C)
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
      
- 0x01 (0b001): Overload
      
- 0x02 (0b010): Overvoltage
      
- 0x03 (0b011): Noodstop
        
- 0x04 (0b100): Gereed, wachtend op start signaal
       
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
## **Register 4: Snelheid aandrijving**
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

        
## **Register 5: Start register**
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
        
### Start [1:1] Start aandrijving    
       
Mogelijke waarden zijn 1 of 0.

Een waarde van 1 geeft aan dat de aandrijving moet starten met de test.

Een waarde van 0 geeft aan dat de test nog niet moet starten of gestart is.
        
---
**RO= Read only**
     
**RW= Read/write**
        
        
## **Register 6: Maximale stroom instelling**
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
        
### Im [15:0] Maximale stroom instelling    
        
Mogelijke waarden zijn 0-65635 (mA)
        
---
**RO= Read only**

**RW= Read/write**

## **Register 7: Maximale spanning instelling**
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
<div class="RegisterTabelTekst">Um</div>
<div class="RegisterTabelTekst">Um</div>
<div class="RegisterTabelTekst">Um</div>
<div class="RegisterTabelTekst">Um</div>
<div class="RegisterTabelTekst">Um</div>
<div class="RegisterTabelTekst">Um</div>
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
<div class="RegisterTabelTekst">Um</div>
<div class="RegisterTabelTekst">Um</div>
<div class="RegisterTabelTekst">Um</div>
<div class="RegisterTabelTekst">Um</div>
<div class="RegisterTabelTekst">Um</div>
<div class="RegisterTabelTekst">Um</div>
<div class="RegisterTabelTekst">Um</div>
<div class="RegisterTabelTekst">Um</div>
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
        
### Um [13:0] Maximale spanning instelling   
        
Mogelijke waarden voor dit register zijn 0-15000 (mV).

Alle getallen die boven de 15000 zitten worden uit veiligheid voor de hardware genegeerd.
        
---
**RO= Read only**

**RW= Read/write**

## **Register 8: Maximale snelheid instelling**
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
<div class="RegisterTabelTekst">Spm</div>
<div class="RegisterTabelTekst">Spm</div>
<div class="RegisterTabelTekst">Spm</div>
<div class="RegisterTabelTekst">Spm</div>
<div class="RegisterTabelTekst">Spm</div>
<div class="RegisterTabelTekst">Spm</div>
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
<div class="RegisterTabelTekst">Spm</div>
<div class="RegisterTabelTekst">Spm</div>
<div class="RegisterTabelTekst">Spm</div>
<div class="RegisterTabelTekst">Spm</div>
<div class="RegisterTabelTekst">Spm</div>
<div class="RegisterTabelTekst">Spm</div>
<div class="RegisterTabelTekst">Spm</div>
<div class="RegisterTabelTekst">Spm</div>
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
        
### Spm [13:0] Maximale snelheid instelling   
        
De mogelijke waarden voor dit register zijn: 0-10000(RPM)
 
Alle getallen die boven de 10000 zitten worden uit veiligheid voor de hardware genegeerd. 

---
**RO= Read only**

**RW= Read/write**
