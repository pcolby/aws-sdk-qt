// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSIGHTSBYASSESSMENTREQUEST_P_H
#define QTAWS_GETINSIGHTSBYASSESSMENTREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "getinsightsbyassessmentrequest.h"

namespace QtAws {
namespace AuditManager {

class GetInsightsByAssessmentRequest;

class GetInsightsByAssessmentRequestPrivate : public AuditManagerRequestPrivate {

public:
    GetInsightsByAssessmentRequestPrivate(const AuditManagerRequest::Action action,
                                   GetInsightsByAssessmentRequest * const q);
    GetInsightsByAssessmentRequestPrivate(const GetInsightsByAssessmentRequestPrivate &other,
                                   GetInsightsByAssessmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetInsightsByAssessmentRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
