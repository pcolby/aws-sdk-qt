// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPCENDPOINTCONNECTIONNOTIFICATIONSREQUEST_P_H
#define QTAWS_DELETEVPCENDPOINTCONNECTIONNOTIFICATIONSREQUEST_P_H

#include "ec2request_p.h"
#include "deletevpcendpointconnectionnotificationsrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteVpcEndpointConnectionNotificationsRequest;

class DeleteVpcEndpointConnectionNotificationsRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteVpcEndpointConnectionNotificationsRequestPrivate(const Ec2Request::Action action,
                                   DeleteVpcEndpointConnectionNotificationsRequest * const q);
    DeleteVpcEndpointConnectionNotificationsRequestPrivate(const DeleteVpcEndpointConnectionNotificationsRequestPrivate &other,
                                   DeleteVpcEndpointConnectionNotificationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVpcEndpointConnectionNotificationsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
