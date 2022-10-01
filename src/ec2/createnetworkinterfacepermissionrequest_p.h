// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENETWORKINTERFACEPERMISSIONREQUEST_P_H
#define QTAWS_CREATENETWORKINTERFACEPERMISSIONREQUEST_P_H

#include "ec2request_p.h"
#include "createnetworkinterfacepermissionrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateNetworkInterfacePermissionRequest;

class CreateNetworkInterfacePermissionRequestPrivate : public Ec2RequestPrivate {

public:
    CreateNetworkInterfacePermissionRequestPrivate(const Ec2Request::Action action,
                                   CreateNetworkInterfacePermissionRequest * const q);
    CreateNetworkInterfacePermissionRequestPrivate(const CreateNetworkInterfacePermissionRequestPrivate &other,
                                   CreateNetworkInterfacePermissionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateNetworkInterfacePermissionRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
