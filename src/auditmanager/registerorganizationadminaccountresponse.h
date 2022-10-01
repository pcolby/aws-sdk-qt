// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERORGANIZATIONADMINACCOUNTRESPONSE_H
#define QTAWS_REGISTERORGANIZATIONADMINACCOUNTRESPONSE_H

#include "auditmanagerresponse.h"
#include "registerorganizationadminaccountrequest.h"

namespace QtAws {
namespace AuditManager {

class RegisterOrganizationAdminAccountResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT RegisterOrganizationAdminAccountResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    RegisterOrganizationAdminAccountResponse(const RegisterOrganizationAdminAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterOrganizationAdminAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterOrganizationAdminAccountResponse)
    Q_DISABLE_COPY(RegisterOrganizationAdminAccountResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
