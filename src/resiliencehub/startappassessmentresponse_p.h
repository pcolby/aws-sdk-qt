// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTAPPASSESSMENTRESPONSE_P_H
#define QTAWS_STARTAPPASSESSMENTRESPONSE_P_H

#include "resiliencehubresponse_p.h"

namespace QtAws {
namespace ResilienceHub {

class StartAppAssessmentResponse;

class StartAppAssessmentResponsePrivate : public ResilienceHubResponsePrivate {

public:

    explicit StartAppAssessmentResponsePrivate(StartAppAssessmentResponse * const q);

    void parseStartAppAssessmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartAppAssessmentResponse)
    Q_DISABLE_COPY(StartAppAssessmentResponsePrivate)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
