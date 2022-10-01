// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTASSESSMENTRUNRESPONSE_P_H
#define QTAWS_STARTASSESSMENTRUNRESPONSE_P_H

#include "inspectorresponse_p.h"

namespace QtAws {
namespace Inspector {

class StartAssessmentRunResponse;

class StartAssessmentRunResponsePrivate : public InspectorResponsePrivate {

public:

    explicit StartAssessmentRunResponsePrivate(StartAssessmentRunResponse * const q);

    void parseStartAssessmentRunResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartAssessmentRunResponse)
    Q_DISABLE_COPY(StartAssessmentRunResponsePrivate)

};

} // namespace Inspector
} // namespace QtAws

#endif
