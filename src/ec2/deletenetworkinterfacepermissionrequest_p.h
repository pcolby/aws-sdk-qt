// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKINTERFACEPERMISSIONREQUEST_P_H
#define QTAWS_DELETENETWORKINTERFACEPERMISSIONREQUEST_P_H

#include "ec2request_p.h"
#include "deletenetworkinterfacepermissionrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteNetworkInterfacePermissionRequest;

class DeleteNetworkInterfacePermissionRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteNetworkInterfacePermissionRequestPrivate(const Ec2Request::Action action,
                                   DeleteNetworkInterfacePermissionRequest * const q);
    DeleteNetworkInterfacePermissionRequestPrivate(const DeleteNetworkInterfacePermissionRequestPrivate &other,
                                   DeleteNetworkInterfacePermissionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteNetworkInterfacePermissionRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
