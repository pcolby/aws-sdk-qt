// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPNCONNECTIONROUTEREQUEST_P_H
#define QTAWS_DELETEVPNCONNECTIONROUTEREQUEST_P_H

#include "ec2request_p.h"
#include "deletevpnconnectionrouterequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteVpnConnectionRouteRequest;

class DeleteVpnConnectionRouteRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteVpnConnectionRouteRequestPrivate(const Ec2Request::Action action,
                                   DeleteVpnConnectionRouteRequest * const q);
    DeleteVpnConnectionRouteRequestPrivate(const DeleteVpnConnectionRouteRequestPrivate &other,
                                   DeleteVpnConnectionRouteRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVpnConnectionRouteRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
