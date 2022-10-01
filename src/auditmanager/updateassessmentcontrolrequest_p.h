// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSESSMENTCONTROLREQUEST_P_H
#define QTAWS_UPDATEASSESSMENTCONTROLREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "updateassessmentcontrolrequest.h"

namespace QtAws {
namespace AuditManager {

class UpdateAssessmentControlRequest;

class UpdateAssessmentControlRequestPrivate : public AuditManagerRequestPrivate {

public:
    UpdateAssessmentControlRequestPrivate(const AuditManagerRequest::Action action,
                                   UpdateAssessmentControlRequest * const q);
    UpdateAssessmentControlRequestPrivate(const UpdateAssessmentControlRequestPrivate &other,
                                   UpdateAssessmentControlRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAssessmentControlRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
