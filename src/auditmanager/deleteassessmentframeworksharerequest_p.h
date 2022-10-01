// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSESSMENTFRAMEWORKSHAREREQUEST_P_H
#define QTAWS_DELETEASSESSMENTFRAMEWORKSHAREREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "deleteassessmentframeworksharerequest.h"

namespace QtAws {
namespace AuditManager {

class DeleteAssessmentFrameworkShareRequest;

class DeleteAssessmentFrameworkShareRequestPrivate : public AuditManagerRequestPrivate {

public:
    DeleteAssessmentFrameworkShareRequestPrivate(const AuditManagerRequest::Action action,
                                   DeleteAssessmentFrameworkShareRequest * const q);
    DeleteAssessmentFrameworkShareRequestPrivate(const DeleteAssessmentFrameworkShareRequestPrivate &other,
                                   DeleteAssessmentFrameworkShareRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAssessmentFrameworkShareRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
