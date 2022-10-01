// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEASSESSMENTFRAMEWORKREQUEST_P_H
#define QTAWS_CREATEASSESSMENTFRAMEWORKREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "createassessmentframeworkrequest.h"

namespace QtAws {
namespace AuditManager {

class CreateAssessmentFrameworkRequest;

class CreateAssessmentFrameworkRequestPrivate : public AuditManagerRequestPrivate {

public:
    CreateAssessmentFrameworkRequestPrivate(const AuditManagerRequest::Action action,
                                   CreateAssessmentFrameworkRequest * const q);
    CreateAssessmentFrameworkRequestPrivate(const CreateAssessmentFrameworkRequestPrivate &other,
                                   CreateAssessmentFrameworkRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAssessmentFrameworkRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
