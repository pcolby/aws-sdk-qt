// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEASSESSMENTREQUEST_P_H
#define QTAWS_CREATEASSESSMENTREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "createassessmentrequest.h"

namespace QtAws {
namespace AuditManager {

class CreateAssessmentRequest;

class CreateAssessmentRequestPrivate : public AuditManagerRequestPrivate {

public:
    CreateAssessmentRequestPrivate(const AuditManagerRequest::Action action,
                                   CreateAssessmentRequest * const q);
    CreateAssessmentRequestPrivate(const CreateAssessmentRequestPrivate &other,
                                   CreateAssessmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAssessmentRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
