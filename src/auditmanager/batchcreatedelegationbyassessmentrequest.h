// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHCREATEDELEGATIONBYASSESSMENTREQUEST_H
#define QTAWS_BATCHCREATEDELEGATIONBYASSESSMENTREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class BatchCreateDelegationByAssessmentRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT BatchCreateDelegationByAssessmentRequest : public AuditManagerRequest {

public:
    BatchCreateDelegationByAssessmentRequest(const BatchCreateDelegationByAssessmentRequest &other);
    BatchCreateDelegationByAssessmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchCreateDelegationByAssessmentRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
