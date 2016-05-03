#!/bin/sh

./bin/fTestEXO --diphotonCats AntiBtag --ncats 1 --analysisType Vqqg --isData 1 -D AntiBtagOut --saveMultiPdf antibtag_multipdf.root -i ${CMSSW_BASE}/src/fitFilesMETPT34/antibtag/final_SilverJson.root --unblind

./bin/fTestEXO --diphotonCats Btag --ncats 1 --analysisType Vqqg --isData 1 -D BtagOut --saveMultiPdf btag_multipdf.root -i ${CMSSW_BASE}/src/fitFilesMETPT34/btag/final_SilverJson.root --unblind
