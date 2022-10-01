// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSIGHTSBYASSESSMENTRESPONSE_P_H
#define QTAWS_GETINSIGHTSBYASSESSMENTRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class GetInsightsByAssessmentResponse;

class GetInsightsByAssessmentResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit GetInsightsByAssessmentResponsePrivate(GetInsightsByAssessmentResponse * const q);

    void parseGetInsightsByAssessmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetInsightsByAssessmentResponse)
    Q_DISABLE_COPY(GetInsightsByAssessmentResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
