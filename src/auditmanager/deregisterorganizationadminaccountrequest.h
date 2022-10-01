// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERORGANIZATIONADMINACCOUNTREQUEST_H
#define QTAWS_DEREGISTERORGANIZATIONADMINACCOUNTREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class DeregisterOrganizationAdminAccountRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT DeregisterOrganizationAdminAccountRequest : public AuditManagerRequest {

public:
    DeregisterOrganizationAdminAccountRequest(const DeregisterOrganizationAdminAccountRequest &other);
    DeregisterOrganizationAdminAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterOrganizationAdminAccountRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
