// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTSFORPROVISIONEDPERMISSIONSETREQUEST_P_H
#define QTAWS_LISTACCOUNTSFORPROVISIONEDPERMISSIONSETREQUEST_P_H

#include "ssoadminrequest_p.h"
#include "listaccountsforprovisionedpermissionsetrequest.h"

namespace QtAws {
namespace SsoAdmin {

class ListAccountsForProvisionedPermissionSetRequest;

class ListAccountsForProvisionedPermissionSetRequestPrivate : public SsoAdminRequestPrivate {

public:
    ListAccountsForProvisionedPermissionSetRequestPrivate(const SsoAdminRequest::Action action,
                                   ListAccountsForProvisionedPermissionSetRequest * const q);
    ListAccountsForProvisionedPermissionSetRequestPrivate(const ListAccountsForProvisionedPermissionSetRequestPrivate &other,
                                   ListAccountsForProvisionedPermissionSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAccountsForProvisionedPermissionSetRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
