// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPERMISSIONSETSPROVISIONEDTOACCOUNTREQUEST_P_H
#define QTAWS_LISTPERMISSIONSETSPROVISIONEDTOACCOUNTREQUEST_P_H

#include "ssoadminrequest_p.h"
#include "listpermissionsetsprovisionedtoaccountrequest.h"

namespace QtAws {
namespace SsoAdmin {

class ListPermissionSetsProvisionedToAccountRequest;

class ListPermissionSetsProvisionedToAccountRequestPrivate : public SsoAdminRequestPrivate {

public:
    ListPermissionSetsProvisionedToAccountRequestPrivate(const SsoAdminRequest::Action action,
                                   ListPermissionSetsProvisionedToAccountRequest * const q);
    ListPermissionSetsProvisionedToAccountRequestPrivate(const ListPermissionSetsProvisionedToAccountRequestPrivate &other,
                                   ListPermissionSetsProvisionedToAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPermissionSetsProvisionedToAccountRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
