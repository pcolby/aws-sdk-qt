// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEASSESSMENTREPORTREQUEST_P_H
#define QTAWS_CREATEASSESSMENTREPORTREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "createassessmentreportrequest.h"

namespace QtAws {
namespace AuditManager {

class CreateAssessmentReportRequest;

class CreateAssessmentReportRequestPrivate : public AuditManagerRequestPrivate {

public:
    CreateAssessmentReportRequestPrivate(const AuditManagerRequest::Action action,
                                   CreateAssessmentReportRequest * const q);
    CreateAssessmentReportRequestPrivate(const CreateAssessmentReportRequestPrivate &other,
                                   CreateAssessmentReportRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAssessmentReportRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
