// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEASSESSMENTREQUEST_H
#define QTAWS_CREATEASSESSMENTREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class CreateAssessmentRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT CreateAssessmentRequest : public AuditManagerRequest {

public:
    CreateAssessmentRequest(const CreateAssessmentRequest &other);
    CreateAssessmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAssessmentRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
