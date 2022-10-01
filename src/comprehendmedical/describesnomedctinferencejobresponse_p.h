// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESNOMEDCTINFERENCEJOBRESPONSE_P_H
#define QTAWS_DESCRIBESNOMEDCTINFERENCEJOBRESPONSE_P_H

#include "comprehendmedicalresponse_p.h"

namespace QtAws {
namespace ComprehendMedical {

class DescribeSNOMEDCTInferenceJobResponse;

class DescribeSNOMEDCTInferenceJobResponsePrivate : public ComprehendMedicalResponsePrivate {

public:

    explicit DescribeSNOMEDCTInferenceJobResponsePrivate(DescribeSNOMEDCTInferenceJobResponse * const q);

    void parseDescribeSNOMEDCTInferenceJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSNOMEDCTInferenceJobResponse)
    Q_DISABLE_COPY(DescribeSNOMEDCTInferenceJobResponsePrivate)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
