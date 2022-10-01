// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCENDPOINTCONNECTIONNOTIFICATIONREQUEST_P_H
#define QTAWS_CREATEVPCENDPOINTCONNECTIONNOTIFICATIONREQUEST_P_H

#include "ec2request_p.h"
#include "createvpcendpointconnectionnotificationrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateVpcEndpointConnectionNotificationRequest;

class CreateVpcEndpointConnectionNotificationRequestPrivate : public Ec2RequestPrivate {

public:
    CreateVpcEndpointConnectionNotificationRequestPrivate(const Ec2Request::Action action,
                                   CreateVpcEndpointConnectionNotificationRequest * const q);
    CreateVpcEndpointConnectionNotificationRequestPrivate(const CreateVpcEndpointConnectionNotificationRequestPrivate &other,
                                   CreateVpcEndpointConnectionNotificationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateVpcEndpointConnectionNotificationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
