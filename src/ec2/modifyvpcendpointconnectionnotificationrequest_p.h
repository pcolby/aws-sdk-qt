// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVPCENDPOINTCONNECTIONNOTIFICATIONREQUEST_P_H
#define QTAWS_MODIFYVPCENDPOINTCONNECTIONNOTIFICATIONREQUEST_P_H

#include "ec2request_p.h"
#include "modifyvpcendpointconnectionnotificationrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyVpcEndpointConnectionNotificationRequest;

class ModifyVpcEndpointConnectionNotificationRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyVpcEndpointConnectionNotificationRequestPrivate(const Ec2Request::Action action,
                                   ModifyVpcEndpointConnectionNotificationRequest * const q);
    ModifyVpcEndpointConnectionNotificationRequestPrivate(const ModifyVpcEndpointConnectionNotificationRequestPrivate &other,
                                   ModifyVpcEndpointConnectionNotificationRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyVpcEndpointConnectionNotificationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
