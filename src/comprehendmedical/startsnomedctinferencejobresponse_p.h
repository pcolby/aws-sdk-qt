// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSNOMEDCTINFERENCEJOBRESPONSE_P_H
#define QTAWS_STARTSNOMEDCTINFERENCEJOBRESPONSE_P_H

#include "comprehendmedicalresponse_p.h"

namespace QtAws {
namespace ComprehendMedical {

class StartSNOMEDCTInferenceJobResponse;

class StartSNOMEDCTInferenceJobResponsePrivate : public ComprehendMedicalResponsePrivate {

public:

    explicit StartSNOMEDCTInferenceJobResponsePrivate(StartSNOMEDCTInferenceJobResponse * const q);

    void parseStartSNOMEDCTInferenceJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartSNOMEDCTInferenceJobResponse)
    Q_DISABLE_COPY(StartSNOMEDCTInferenceJobResponsePrivate)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
