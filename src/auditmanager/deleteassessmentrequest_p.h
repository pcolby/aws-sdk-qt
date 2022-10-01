// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSESSMENTREQUEST_P_H
#define QTAWS_DELETEASSESSMENTREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "deleteassessmentrequest.h"

namespace QtAws {
namespace AuditManager {

class DeleteAssessmentRequest;

class DeleteAssessmentRequestPrivate : public AuditManagerRequestPrivate {

public:
    DeleteAssessmentRequestPrivate(const AuditManagerRequest::Action action,
                                   DeleteAssessmentRequest * const q);
    DeleteAssessmentRequestPrivate(const DeleteAssessmentRequestPrivate &other,
                                   DeleteAssessmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAssessmentRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
