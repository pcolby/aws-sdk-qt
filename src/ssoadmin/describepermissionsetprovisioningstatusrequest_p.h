// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPERMISSIONSETPROVISIONINGSTATUSREQUEST_P_H
#define QTAWS_DESCRIBEPERMISSIONSETPROVISIONINGSTATUSREQUEST_P_H

#include "ssoadminrequest_p.h"
#include "describepermissionsetprovisioningstatusrequest.h"

namespace QtAws {
namespace SsoAdmin {

class DescribePermissionSetProvisioningStatusRequest;

class DescribePermissionSetProvisioningStatusRequestPrivate : public SsoAdminRequestPrivate {

public:
    DescribePermissionSetProvisioningStatusRequestPrivate(const SsoAdminRequest::Action action,
                                   DescribePermissionSetProvisioningStatusRequest * const q);
    DescribePermissionSetProvisioningStatusRequestPrivate(const DescribePermissionSetProvisioningStatusRequestPrivate &other,
                                   DescribePermissionSetProvisioningStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePermissionSetProvisioningStatusRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
