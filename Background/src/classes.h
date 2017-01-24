#include "flashggFinalFit/Background/interface/PdfModelBuilder.h"
#include "flashggFinalFit/Background/interface/ProfileMultiplePdfs.h"
#include "flashggFinalFit/Background/interface/RooExponentialSum.h"
#include "flashggFinalFit/Background/interface/RooPowerLaw.h"
#include "flashggFinalFit/Background/interface/RooPowerLawSum.h"

namespace {
  struct dictionary {
    PdfModelBuilder     class1;
    ProfileMultiplePdfs class2;       
    RooExponentialSum   class3;
    RooPowerLaw         class4;
    RooPowerLawSum      class5;
  };
}
