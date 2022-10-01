// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSESSMENTREPORTREQUEST_P_H
#define QTAWS_DELETEASSESSMENTREPORTREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "deleteassessmentreportrequest.h"

namespace QtAws {
namespace AuditManager {

class DeleteAssessmentReportRequest;

class DeleteAssessmentReportRequestPrivate : public AuditManagerRequestPrivate {

public:
    DeleteAssessmentReportRequestPrivate(const AuditManagerRequest::Action action,
                                   DeleteAssessmentReportRequest * const q);
    DeleteAssessmentReportRequestPrivate(const DeleteAssessmentReportRequestPrivate &other,
                                   DeleteAssessmentReportRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAssessmentReportRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
