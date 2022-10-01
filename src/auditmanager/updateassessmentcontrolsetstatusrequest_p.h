// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSESSMENTCONTROLSETSTATUSREQUEST_P_H
#define QTAWS_UPDATEASSESSMENTCONTROLSETSTATUSREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "updateassessmentcontrolsetstatusrequest.h"

namespace QtAws {
namespace AuditManager {

class UpdateAssessmentControlSetStatusRequest;

class UpdateAssessmentControlSetStatusRequestPrivate : public AuditManagerRequestPrivate {

public:
    UpdateAssessmentControlSetStatusRequestPrivate(const AuditManagerRequest::Action action,
                                   UpdateAssessmentControlSetStatusRequest * const q);
    UpdateAssessmentControlSetStatusRequestPrivate(const UpdateAssessmentControlSetStatusRequestPrivate &other,
                                   UpdateAssessmentControlSetStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAssessmentControlSetStatusRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
