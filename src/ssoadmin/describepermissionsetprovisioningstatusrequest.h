// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPERMISSIONSETPROVISIONINGSTATUSREQUEST_H
#define QTAWS_DESCRIBEPERMISSIONSETPROVISIONINGSTATUSREQUEST_H

#include "ssoadminrequest.h"

namespace QtAws {
namespace SsoAdmin {

class DescribePermissionSetProvisioningStatusRequestPrivate;

class QTAWSSSOADMIN_EXPORT DescribePermissionSetProvisioningStatusRequest : public SsoAdminRequest {

public:
    DescribePermissionSetProvisioningStatusRequest(const DescribePermissionSetProvisioningStatusRequest &other);
    DescribePermissionSetProvisioningStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePermissionSetProvisioningStatusRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
