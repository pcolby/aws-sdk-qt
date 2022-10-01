// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSESSMENTREPORTURLRESPONSE_P_H
#define QTAWS_GETASSESSMENTREPORTURLRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class GetAssessmentReportUrlResponse;

class GetAssessmentReportUrlResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit GetAssessmentReportUrlResponsePrivate(GetAssessmentReportUrlResponse * const q);

    void parseGetAssessmentReportUrlResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAssessmentReportUrlResponse)
    Q_DISABLE_COPY(GetAssessmentReportUrlResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
