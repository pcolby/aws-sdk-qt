// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSESSMENTREPORTURLREQUEST_P_H
#define QTAWS_GETASSESSMENTREPORTURLREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "getassessmentreporturlrequest.h"

namespace QtAws {
namespace AuditManager {

class GetAssessmentReportUrlRequest;

class GetAssessmentReportUrlRequestPrivate : public AuditManagerRequestPrivate {

public:
    GetAssessmentReportUrlRequestPrivate(const AuditManagerRequest::Action action,
                                   GetAssessmentReportUrlRequest * const q);
    GetAssessmentReportUrlRequestPrivate(const GetAssessmentReportUrlRequestPrivate &other,
                                   GetAssessmentReportUrlRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAssessmentReportUrlRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
