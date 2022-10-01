// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPERMISSIONSETPROVISIONINGSTATUSREQUEST_H
#define QTAWS_LISTPERMISSIONSETPROVISIONINGSTATUSREQUEST_H

#include "ssoadminrequest.h"

namespace QtAws {
namespace SsoAdmin {

class ListPermissionSetProvisioningStatusRequestPrivate;

class QTAWSSSOADMIN_EXPORT ListPermissionSetProvisioningStatusRequest : public SsoAdminRequest {

public:
    ListPermissionSetProvisioningStatusRequest(const ListPermissionSetProvisioningStatusRequest &other);
    ListPermissionSetProvisioningStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPermissionSetProvisioningStatusRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
