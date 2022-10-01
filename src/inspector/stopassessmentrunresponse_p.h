// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPASSESSMENTRUNRESPONSE_P_H
#define QTAWS_STOPASSESSMENTRUNRESPONSE_P_H

#include "inspectorresponse_p.h"

namespace QtAws {
namespace Inspector {

class StopAssessmentRunResponse;

class StopAssessmentRunResponsePrivate : public InspectorResponsePrivate {

public:

    explicit StopAssessmentRunResponsePrivate(StopAssessmentRunResponse * const q);

    void parseStopAssessmentRunResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopAssessmentRunResponse)
    Q_DISABLE_COPY(StopAssessmentRunResponsePrivate)

};

} // namespace Inspector
} // namespace QtAws

#endif
