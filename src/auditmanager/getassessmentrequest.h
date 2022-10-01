// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSESSMENTREQUEST_H
#define QTAWS_GETASSESSMENTREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class GetAssessmentRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT GetAssessmentRequest : public AuditManagerRequest {

public:
    GetAssessmentRequest(const GetAssessmentRequest &other);
    GetAssessmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAssessmentRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
