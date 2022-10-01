// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSESSMENTSTATUSREQUEST_P_H
#define QTAWS_UPDATEASSESSMENTSTATUSREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "updateassessmentstatusrequest.h"

namespace QtAws {
namespace AuditManager {

class UpdateAssessmentStatusRequest;

class UpdateAssessmentStatusRequestPrivate : public AuditManagerRequestPrivate {

public:
    UpdateAssessmentStatusRequestPrivate(const AuditManagerRequest::Action action,
                                   UpdateAssessmentStatusRequest * const q);
    UpdateAssessmentStatusRequestPrivate(const UpdateAssessmentStatusRequestPrivate &other,
                                   UpdateAssessmentStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAssessmentStatusRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
