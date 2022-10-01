// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VALIDATEASSESSMENTREPORTINTEGRITYRESPONSE_P_H
#define QTAWS_VALIDATEASSESSMENTREPORTINTEGRITYRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class ValidateAssessmentReportIntegrityResponse;

class ValidateAssessmentReportIntegrityResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit ValidateAssessmentReportIntegrityResponsePrivate(ValidateAssessmentReportIntegrityResponse * const q);

    void parseValidateAssessmentReportIntegrityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ValidateAssessmentReportIntegrityResponse)
    Q_DISABLE_COPY(ValidateAssessmentReportIntegrityResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
