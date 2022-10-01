// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHCREATEDELEGATIONBYASSESSMENTREQUEST_P_H
#define QTAWS_BATCHCREATEDELEGATIONBYASSESSMENTREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "batchcreatedelegationbyassessmentrequest.h"

namespace QtAws {
namespace AuditManager {

class BatchCreateDelegationByAssessmentRequest;

class BatchCreateDelegationByAssessmentRequestPrivate : public AuditManagerRequestPrivate {

public:
    BatchCreateDelegationByAssessmentRequestPrivate(const AuditManagerRequest::Action action,
                                   BatchCreateDelegationByAssessmentRequest * const q);
    BatchCreateDelegationByAssessmentRequestPrivate(const BatchCreateDelegationByAssessmentRequestPrivate &other,
                                   BatchCreateDelegationByAssessmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchCreateDelegationByAssessmentRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
