// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETORGANIZATIONADMINACCOUNTREQUEST_H
#define QTAWS_GETORGANIZATIONADMINACCOUNTREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class GetOrganizationAdminAccountRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT GetOrganizationAdminAccountRequest : public AuditManagerRequest {

public:
    GetOrganizationAdminAccountRequest(const GetOrganizationAdminAccountRequest &other);
    GetOrganizationAdminAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOrganizationAdminAccountRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
