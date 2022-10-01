// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERORGANIZATIONADMINACCOUNTREQUEST_H
#define QTAWS_REGISTERORGANIZATIONADMINACCOUNTREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class RegisterOrganizationAdminAccountRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT RegisterOrganizationAdminAccountRequest : public AuditManagerRequest {

public:
    RegisterOrganizationAdminAccountRequest(const RegisterOrganizationAdminAccountRequest &other);
    RegisterOrganizationAdminAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterOrganizationAdminAccountRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
