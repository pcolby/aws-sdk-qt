// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VALIDATEASSESSMENTREPORTINTEGRITYREQUEST_P_H
#define QTAWS_VALIDATEASSESSMENTREPORTINTEGRITYREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "validateassessmentreportintegrityrequest.h"

namespace QtAws {
namespace AuditManager {

class ValidateAssessmentReportIntegrityRequest;

class ValidateAssessmentReportIntegrityRequestPrivate : public AuditManagerRequestPrivate {

public:
    ValidateAssessmentReportIntegrityRequestPrivate(const AuditManagerRequest::Action action,
                                   ValidateAssessmentReportIntegrityRequest * const q);
    ValidateAssessmentReportIntegrityRequestPrivate(const ValidateAssessmentReportIntegrityRequestPrivate &other,
                                   ValidateAssessmentReportIntegrityRequest * const q);

private:
    Q_DECLARE_PUBLIC(ValidateAssessmentReportIntegrityRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
