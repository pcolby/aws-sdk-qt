// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSNOMEDCTINFERENCEJOBRESPONSE_P_H
#define QTAWS_STOPSNOMEDCTINFERENCEJOBRESPONSE_P_H

#include "comprehendmedicalresponse_p.h"

namespace QtAws {
namespace ComprehendMedical {

class StopSNOMEDCTInferenceJobResponse;

class StopSNOMEDCTInferenceJobResponsePrivate : public ComprehendMedicalResponsePrivate {

public:

    explicit StopSNOMEDCTInferenceJobResponsePrivate(StopSNOMEDCTInferenceJobResponse * const q);

    void parseStopSNOMEDCTInferenceJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopSNOMEDCTInferenceJobResponse)
    Q_DISABLE_COPY(StopSNOMEDCTInferenceJobResponsePrivate)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
