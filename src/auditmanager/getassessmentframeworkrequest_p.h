// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSESSMENTFRAMEWORKREQUEST_P_H
#define QTAWS_GETASSESSMENTFRAMEWORKREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "getassessmentframeworkrequest.h"

namespace QtAws {
namespace AuditManager {

class GetAssessmentFrameworkRequest;

class GetAssessmentFrameworkRequestPrivate : public AuditManagerRequestPrivate {

public:
    GetAssessmentFrameworkRequestPrivate(const AuditManagerRequest::Action action,
                                   GetAssessmentFrameworkRequest * const q);
    GetAssessmentFrameworkRequestPrivate(const GetAssessmentFrameworkRequestPrivate &other,
                                   GetAssessmentFrameworkRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAssessmentFrameworkRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
