// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSESSMENTFRAMEWORKREQUEST_P_H
#define QTAWS_UPDATEASSESSMENTFRAMEWORKREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "updateassessmentframeworkrequest.h"

namespace QtAws {
namespace AuditManager {

class UpdateAssessmentFrameworkRequest;

class UpdateAssessmentFrameworkRequestPrivate : public AuditManagerRequestPrivate {

public:
    UpdateAssessmentFrameworkRequestPrivate(const AuditManagerRequest::Action action,
                                   UpdateAssessmentFrameworkRequest * const q);
    UpdateAssessmentFrameworkRequestPrivate(const UpdateAssessmentFrameworkRequestPrivate &other,
                                   UpdateAssessmentFrameworkRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAssessmentFrameworkRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
