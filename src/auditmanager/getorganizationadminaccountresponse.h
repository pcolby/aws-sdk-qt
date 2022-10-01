// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETORGANIZATIONADMINACCOUNTRESPONSE_H
#define QTAWS_GETORGANIZATIONADMINACCOUNTRESPONSE_H

#include "auditmanagerresponse.h"
#include "getorganizationadminaccountrequest.h"

namespace QtAws {
namespace AuditManager {

class GetOrganizationAdminAccountResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT GetOrganizationAdminAccountResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    GetOrganizationAdminAccountResponse(const GetOrganizationAdminAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetOrganizationAdminAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOrganizationAdminAccountResponse)
    Q_DISABLE_COPY(GetOrganizationAdminAccountResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
