// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERORGANIZATIONADMINACCOUNTRESPONSE_H
#define QTAWS_DEREGISTERORGANIZATIONADMINACCOUNTRESPONSE_H

#include "auditmanagerresponse.h"
#include "deregisterorganizationadminaccountrequest.h"

namespace QtAws {
namespace AuditManager {

class DeregisterOrganizationAdminAccountResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT DeregisterOrganizationAdminAccountResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    DeregisterOrganizationAdminAccountResponse(const DeregisterOrganizationAdminAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeregisterOrganizationAdminAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterOrganizationAdminAccountResponse)
    Q_DISABLE_COPY(DeregisterOrganizationAdminAccountResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
