// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETEDELEGATIONBYASSESSMENTREQUEST_P_H
#define QTAWS_BATCHDELETEDELEGATIONBYASSESSMENTREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "batchdeletedelegationbyassessmentrequest.h"

namespace QtAws {
namespace AuditManager {

class BatchDeleteDelegationByAssessmentRequest;

class BatchDeleteDelegationByAssessmentRequestPrivate : public AuditManagerRequestPrivate {

public:
    BatchDeleteDelegationByAssessmentRequestPrivate(const AuditManagerRequest::Action action,
                                   BatchDeleteDelegationByAssessmentRequest * const q);
    BatchDeleteDelegationByAssessmentRequestPrivate(const BatchDeleteDelegationByAssessmentRequestPrivate &other,
                                   BatchDeleteDelegationByAssessmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchDeleteDelegationByAssessmentRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
