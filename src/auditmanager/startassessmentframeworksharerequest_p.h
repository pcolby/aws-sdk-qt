// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTASSESSMENTFRAMEWORKSHAREREQUEST_P_H
#define QTAWS_STARTASSESSMENTFRAMEWORKSHAREREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "startassessmentframeworksharerequest.h"

namespace QtAws {
namespace AuditManager {

class StartAssessmentFrameworkShareRequest;

class StartAssessmentFrameworkShareRequestPrivate : public AuditManagerRequestPrivate {

public:
    StartAssessmentFrameworkShareRequestPrivate(const AuditManagerRequest::Action action,
                                   StartAssessmentFrameworkShareRequest * const q);
    StartAssessmentFrameworkShareRequestPrivate(const StartAssessmentFrameworkShareRequestPrivate &other,
                                   StartAssessmentFrameworkShareRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartAssessmentFrameworkShareRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
