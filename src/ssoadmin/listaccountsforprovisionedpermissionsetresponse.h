// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTSFORPROVISIONEDPERMISSIONSETRESPONSE_H
#define QTAWS_LISTACCOUNTSFORPROVISIONEDPERMISSIONSETRESPONSE_H

#include "ssoadminresponse.h"
#include "listaccountsforprovisionedpermissionsetrequest.h"

namespace QtAws {
namespace SsoAdmin {

class ListAccountsForProvisionedPermissionSetResponsePrivate;

class QTAWSSSOADMIN_EXPORT ListAccountsForProvisionedPermissionSetResponse : public SsoAdminResponse {
    Q_OBJECT

public:
    ListAccountsForProvisionedPermissionSetResponse(const ListAccountsForProvisionedPermissionSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAccountsForProvisionedPermissionSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAccountsForProvisionedPermissionSetResponse)
    Q_DISABLE_COPY(ListAccountsForProvisionedPermissionSetResponse)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
