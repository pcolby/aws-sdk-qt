// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETEDELEGATIONBYASSESSMENTREQUEST_H
#define QTAWS_BATCHDELETEDELEGATIONBYASSESSMENTREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class BatchDeleteDelegationByAssessmentRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT BatchDeleteDelegationByAssessmentRequest : public AuditManagerRequest {

public:
    BatchDeleteDelegationByAssessmentRequest(const BatchDeleteDelegationByAssessmentRequest &other);
    BatchDeleteDelegationByAssessmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDeleteDelegationByAssessmentRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
