// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTSFORPROVISIONEDPERMISSIONSETRESPONSE_P_H
#define QTAWS_LISTACCOUNTSFORPROVISIONEDPERMISSIONSETRESPONSE_P_H

#include "ssoadminresponse_p.h"

namespace QtAws {
namespace SsoAdmin {

class ListAccountsForProvisionedPermissionSetResponse;

class ListAccountsForProvisionedPermissionSetResponsePrivate : public SsoAdminResponsePrivate {

public:

    explicit ListAccountsForProvisionedPermissionSetResponsePrivate(ListAccountsForProvisionedPermissionSetResponse * const q);

    void parseListAccountsForProvisionedPermissionSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAccountsForProvisionedPermissionSetResponse)
    Q_DISABLE_COPY(ListAccountsForProvisionedPermissionSetResponsePrivate)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
