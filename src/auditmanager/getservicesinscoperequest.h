// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICESINSCOPEREQUEST_H
#define QTAWS_GETSERVICESINSCOPEREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class GetServicesInScopeRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT GetServicesInScopeRequest : public AuditManagerRequest {

public:
    GetServicesInScopeRequest(const GetServicesInScopeRequest &other);
    GetServicesInScopeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetServicesInScopeRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
