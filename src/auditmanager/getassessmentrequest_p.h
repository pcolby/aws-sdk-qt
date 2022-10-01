// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSESSMENTREQUEST_P_H
#define QTAWS_GETASSESSMENTREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "getassessmentrequest.h"

namespace QtAws {
namespace AuditManager {

class GetAssessmentRequest;

class GetAssessmentRequestPrivate : public AuditManagerRequestPrivate {

public:
    GetAssessmentRequestPrivate(const AuditManagerRequest::Action action,
                                   GetAssessmentRequest * const q);
    GetAssessmentRequestPrivate(const GetAssessmentRequestPrivate &other,
                                   GetAssessmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAssessmentRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
