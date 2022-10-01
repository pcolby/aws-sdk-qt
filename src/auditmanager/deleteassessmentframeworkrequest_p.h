// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSESSMENTFRAMEWORKREQUEST_P_H
#define QTAWS_DELETEASSESSMENTFRAMEWORKREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "deleteassessmentframeworkrequest.h"

namespace QtAws {
namespace AuditManager {

class DeleteAssessmentFrameworkRequest;

class DeleteAssessmentFrameworkRequestPrivate : public AuditManagerRequestPrivate {

public:
    DeleteAssessmentFrameworkRequestPrivate(const AuditManagerRequest::Action action,
                                   DeleteAssessmentFrameworkRequest * const q);
    DeleteAssessmentFrameworkRequestPrivate(const DeleteAssessmentFrameworkRequestPrivate &other,
                                   DeleteAssessmentFrameworkRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAssessmentFrameworkRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
