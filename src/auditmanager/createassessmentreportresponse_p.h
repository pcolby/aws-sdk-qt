// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEASSESSMENTREPORTRESPONSE_P_H
#define QTAWS_CREATEASSESSMENTREPORTRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class CreateAssessmentReportResponse;

class CreateAssessmentReportResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit CreateAssessmentReportResponsePrivate(CreateAssessmentReportResponse * const q);

    void parseCreateAssessmentReportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAssessmentReportResponse)
    Q_DISABLE_COPY(CreateAssessmentReportResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
