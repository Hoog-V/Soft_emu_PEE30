# Registers en slave-adressen I2C

In overleg met de projectleiders is er besloten welke data in wel register komt.

!!! note "Wat wordt er bedoeld met een register en waarvoor is het nodig?"
        Bij I2C communicatie is er altijd een master en een slave apparaat. 
        Waarbij de master beslist met welk apparaat er gesproken wordt. De slave heeft hier geen zeggenschap over. De enige taak van een slave apparaat is reageren als een stuk aanroepbaar geheugen. Het stuk aanroepbaar geheugen van de slave is onderverdeeld in een aantal geheugenplaatsen deze geheugenplaatsen worden registers genoemd. Deze registers houden in dit geval 2 bytes (16-bits waarden). Naar deze geheugenplaatsen kan door het master apparaat geschreven of gelezen worden.
        Het speciferen naar welk register de master wil schrijven of lezen geeft de master aan met een verzoek aan het slave-apparaat. 
        Vervolgens krijgt de master of de data opgestuurd of zet de master zelf de data op de databus afhankelijk of het een schrijf- of leesverzoek is.
        
        Deze registers zijn van belang omdat er bij de communicatie tussen de onderdelen I2C wordt gebruikt. Waarbij het onderdeel MCU de master is en de belasting en aandrijving de slaves. Elk register heeft specifieke informatie: rendement, vermogen DUT, enz. In welke register welke informatie staat wordt beschreven in een **register map**.
        
        
## Register map aandrijving

<style>
.divTable{
	display: table;
	width: 80%;
}
.divTableRow {
	display: table-row;
}
.divTableHeading {
	background-color: #EEE;
	display: table-header-group;
}
.divTableCell, .divTableHead {
	border: 1px solid #999999;
	display: table-cell;
	font-size: 150%;
	background-color: LIGHTGREY;
	padding: 3px 30px;
}
.divTableCellp, .divTableHead {
	border: 0px;
	text-align: center;
	display: table-cell;
	padding: 3px 30px;
}
.divTableCellt, .divTableHead {
	border: 1px solid #999999;
	text-align: center;
	display: table-cell;
	font-size: 90%;
	padding: 10px 30px;
}
.divTableHeading {
	background-color: #EEE;
	display: table-header-group;
	font-weight: bold;
}
.divTableFoot {
	background-color: #EEE;
	display: table-footer-group;
	font-weight: bold;
}
.divTableBody {
	display: table-row-group;
}
</style>

!!! info "Register 0: Status aandrijving"
        #### Register 0: Status aandrijving
        #### BIT:
        <div class="divTable">
        <div class="divTableBody">
        <div class="divTableRow">
        <div class="divTableCellp">15</div>
        <div class="divTableCellp">14</div>
        <div class="divTableCellp">13</div>
        <div class="divTableCellp">12</div>
        <div class="divTableCellp">11</div>
        <div class="divTableCellp">10</div>
        <div class="divTableCellp">9</div>
        <div class="divTableCellp">8</div>
        </div>
        <div class="divTableRow">
        <div class="divTableCell">&nbsp;</div>
        <div class="divTableCell">&nbsp;</div>
        <div class="divTableCell">&nbsp;</div>
        <div class="divTableCell">&nbsp;</div>
        <div class="divTableCell">&nbsp;</div>
        <div class="divTableCell">&nbsp;</div>
        <div class="divTableCell">&nbsp;</div>
        <div class="divTableCell">&nbsp;</div>
        </div>
        <div class="divTableRow">
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        </div>
        </div>
        </div>
 
        <div class="divTable">
        <div class="divTableBody">
        <div class="divTableRow">
        <div class="divTableCellp">7</div>
        <div class="divTableCellp">6</div>
        <div class="divTableCellp">5</div>
        <div class="divTableCellp">4</div>
        <div class="divTableCellp">3</div>
        <div class="divTableCellp">2</div>
        <div class="divTableCellp">1</div>
        <div class="divTableCellp">0</div>
        </div>
        <div class="divTableRow">
        <div class="divTableCell">&nbsp;</div>
        <div class="divTableCell">&nbsp;</div>
        <div class="divTableCell">&nbsp;</div>
        <div class="divTableCell">&nbsp;</div>
        <div class="divTableCell">&nbsp;</div>
        <div class="divTableCellt">Stat</div>
        <div class="divTableCellt">Stat</div>
        <div class="divTableCellt">Stat</div>
        </div>
        <div class="divTableRow">
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
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
        
!!! info "Register 1: Rendement aandrijving"
        #### Register 1: Rendement aandrijving
        #### BIT:
        <div class="divTable">
        <div class="divTableBody">
        <div class="divTableRow">
        <div class="divTableCellp">15</div>
        <div class="divTableCellp">14</div>
        <div class="divTableCellp">13</div>
        <div class="divTableCellp">12</div>
        <div class="divTableCellp">11</div>
        <div class="divTableCellp">10</div>
        <div class="divTableCellp">9</div>
        <div class="divTableCellp">8</div>
        </div>
        <div class="divTableRow">
        <div class="divTableCell">&nbsp;</div>
        <div class="divTableCell">&nbsp;</div>
        <div class="divTableCell">&nbsp;</div>
        <div class="divTableCell">&nbsp;</div>
        <div class="divTableCell">&nbsp;</div>
        <div class="divTableCell">&nbsp;</div>
        <div class="divTableCell">&nbsp;</div>
        <div class="divTableCell">&nbsp;</div>
        </div>
        <div class="divTableRow">
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        </div>
        </div>
        </div>
 
        <div class="divTable">
        <div class="divTableBody">
        <div class="divTableRow">
        <div class="divTableCellp">7</div>
        <div class="divTableCellp">6</div>
        <div class="divTableCellp">5</div>
        <div class="divTableCellp">4</div>
        <div class="divTableCellp">3</div>
        <div class="divTableCellp">2</div>
        <div class="divTableCellp">1</div>
        <div class="divTableCellp">0</div>
        </div>
        <div class="divTableRow">
        <div class="divTableCell">&nbsp;</div>
        <div class="divTableCellt">Ren</div>
        <div class="divTableCellt">Ren</div>
        <div class="divTableCellt">Ren</div>
        <div class="divTableCellt">Ren</div>
        <div class="divTableCellt">Ren</div>
        <div class="divTableCellt">Ren</div>
        <div class="divTableCellt">Ren</div>
        </div>
        <div class="divTableRow">
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        </div>
        </div>
        </div>
        
        ### Ren [6:0] Rendement aandrijving 
        
        Mogelijke waarden zijn theoretisch mogelijk van 0-127. 
        Echter wordt alleen het bereik van 0-100(%) gebruikt.
        
!!! info "Register 2: Stroom aandrijving"
        #### Register 1: Stroom aandrijving
        <div class="divTable">
        <div class="divTableBody">
        <div class="divTableRow">
        <div class="divTableCellp">15</div>
        <div class="divTableCellp">14</div>
        <div class="divTableCellp">13</div>
        <div class="divTableCellp">12</div>
        <div class="divTableCellp">11</div>
        <div class="divTableCellp">10</div>
        <div class="divTableCellp">9</div>
        <div class="divTableCellp">8</div>
        </div>
        <div class="divTableRow">
        <div class="divTableCellt">IA</div>
        <div class="divTableCellt">IA</div>
        <div class="divTableCellt">IA</div>
        <div class="divTableCellt">IA</div>
        <div class="divTableCellt">IA</div>
        <div class="divTableCellt">IA</div>
        <div class="divTableCellt">IA</div>
        <div class="divTableCellt">IA</div>
        </div>
        <div class="divTableRow">
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        </div>
        </div>
        </div>
 
        <div class="divTable">
        <div class="divTableBody">
        <div class="divTableRow">
        <div class="divTableCellp">7</div>
        <div class="divTableCellp">6</div>
        <div class="divTableCellp">5</div>
        <div class="divTableCellp">4</div>
        <div class="divTableCellp">3</div>
        <div class="divTableCellp">2</div>
        <div class="divTableCellp">1</div>
        <div class="divTableCellp">0</div>
        </div>
        <div class="divTableRow">
        <div class="divTableCellt">IA</div>
        <div class="divTableCellt">IA.</div>
        <div class="divTableCellt">IA.</div>
        <div class="divTableCellt">IA.</div>
        <div class="divTableCellt">IA.</div>
        <div class="divTableCellt">IA.</div>
        <div class="divTableCellt">IA.</div>
        <div class="divTableCellt">IA.</div>
        </div>
        <div class="divTableRow">
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        </div>
        </div>
        </div>
        
        ### IA [15:0] Stroom aandrijving    
        
        Mogelijke waarden zijn 0-65635 (mA)
        
!!! info "Register 3: Stroom aandrijving"
        #### Register 1: Stroom aandrijving
        <div class="divTable">
        <div class="divTableBody">
        <div class="divTableRow">
        <div class="divTableCellp">15</div>
        <div class="divTableCellp">14</div>
        <div class="divTableCellp">13</div>
        <div class="divTableCellp">12</div>
        <div class="divTableCellp">11</div>
        <div class="divTableCellp">10</div>
        <div class="divTableCellp">9</div>
        <div class="divTableCellp">8</div>
        </div>
        <div class="divTableRow">
        <div class="divTableCellt">IA</div>
        <div class="divTableCellt">IA</div>
        <div class="divTableCellt">IA</div>
        <div class="divTableCellt">IA</div>
        <div class="divTableCellt">IA</div>
        <div class="divTableCellt">IA</div>
        <div class="divTableCellt">IA</div>
        <div class="divTableCellt">IA</div>
        </div>
        <div class="divTableRow">
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        </div>
        </div>
        </div>
 
        <div class="divTable">
        <div class="divTableBody">
        <div class="divTableRow">
        <div class="divTableCellp">7</div>
        <div class="divTableCellp">6</div>
        <div class="divTableCellp">5</div>
        <div class="divTableCellp">4</div>
        <div class="divTableCellp">3</div>
        <div class="divTableCellp">2</div>
        <div class="divTableCellp">1</div>
        <div class="divTableCellp">0</div>
        </div>
        <div class="divTableRow">
        <div class="divTableCellt">IA</div>
        <div class="divTableCellt">IA.</div>
        <div class="divTableCellt">IA.</div>
        <div class="divTableCellt">IA.</div>
        <div class="divTableCellt">IA.</div>
        <div class="divTableCellt">IA.</div>
        <div class="divTableCellt">IA.</div>
        <div class="divTableCellt">IA.</div>
        </div>
        <div class="divTableRow">
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        <div class="divTableCellp">RO</div>
        </div>
        </div>
        </div>
        
        ### IA [15:0] Stroom aandrijving    
        
        Mogelijke waarden zijn 0-65635 (mA)     
        
        
        
