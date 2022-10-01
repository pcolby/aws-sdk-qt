// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSESSMENTFRAMEWORKSHAREREQUEST_P_H
#define QTAWS_UPDATEASSESSMENTFRAMEWORKSHAREREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "updateassessmentframeworksharerequest.h"

namespace QtAws {
namespace AuditManager {

class UpdateAssessmentFrameworkShareRequest;

class UpdateAssessmentFrameworkShareRequestPrivate : public AuditManagerRequestPrivate {

public:
    UpdateAssessmentFrameworkShareRequestPrivate(const AuditManagerRequest::Action action,
                                   UpdateAssessmentFrameworkShareRequest * const q);
    UpdateAssessmentFrameworkShareRequestPrivate(const UpdateAssessmentFrameworkShareRequestPrivate &other,
                                   UpdateAssessmentFrameworkShareRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAssessmentFrameworkShareRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
