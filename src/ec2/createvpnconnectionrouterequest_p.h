// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPNCONNECTIONROUTEREQUEST_P_H
#define QTAWS_CREATEVPNCONNECTIONROUTEREQUEST_P_H

#include "ec2request_p.h"
#include "createvpnconnectionrouterequest.h"

namespace QtAws {
namespace Ec2 {

class CreateVpnConnectionRouteRequest;

class CreateVpnConnectionRouteRequestPrivate : public Ec2RequestPrivate {

public:
    CreateVpnConnectionRouteRequestPrivate(const Ec2Request::Action action,
                                   CreateVpnConnectionRouteRequest * const q);
    CreateVpnConnectionRouteRequestPrivate(const CreateVpnConnectionRouteRequestPrivate &other,
                                   CreateVpnConnectionRouteRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateVpnConnectionRouteRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
