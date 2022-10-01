// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSESSMENTREPORTRESPONSE_P_H
#define QTAWS_GETASSESSMENTREPORTRESPONSE_P_H

#include "inspectorresponse_p.h"

namespace QtAws {
namespace Inspector {

class GetAssessmentReportResponse;

class GetAssessmentReportResponsePrivate : public InspectorResponsePrivate {

public:

    explicit GetAssessmentReportResponsePrivate(GetAssessmentReportResponse * const q);

    void parseGetAssessmentReportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAssessmentReportResponse)
    Q_DISABLE_COPY(GetAssessmentReportResponsePrivate)

};

} // namespace Inspector
} // namespace QtAws

#endif
