// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPERMISSIONSETPROVISIONINGSTATUSREQUEST_P_H
#define QTAWS_LISTPERMISSIONSETPROVISIONINGSTATUSREQUEST_P_H

#include "ssoadminrequest_p.h"
#include "listpermissionsetprovisioningstatusrequest.h"

namespace QtAws {
namespace SsoAdmin {

class ListPermissionSetProvisioningStatusRequest;

class ListPermissionSetProvisioningStatusRequestPrivate : public SsoAdminRequestPrivate {

public:
    ListPermissionSetProvisioningStatusRequestPrivate(const SsoAdminRequest::Action action,
                                   ListPermissionSetProvisioningStatusRequest * const q);
    ListPermissionSetProvisioningStatusRequestPrivate(const ListPermissionSetProvisioningStatusRequestPrivate &other,
                                   ListPermissionSetProvisioningStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPermissionSetProvisioningStatusRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
