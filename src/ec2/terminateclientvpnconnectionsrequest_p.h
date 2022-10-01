// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATECLIENTVPNCONNECTIONSREQUEST_P_H
#define QTAWS_TERMINATECLIENTVPNCONNECTIONSREQUEST_P_H

#include "ec2request_p.h"
#include "terminateclientvpnconnectionsrequest.h"

namespace QtAws {
namespace Ec2 {

class TerminateClientVpnConnectionsRequest;

class TerminateClientVpnConnectionsRequestPrivate : public Ec2RequestPrivate {

public:
    TerminateClientVpnConnectionsRequestPrivate(const Ec2Request::Action action,
                                   TerminateClientVpnConnectionsRequest * const q);
    TerminateClientVpnConnectionsRequestPrivate(const TerminateClientVpnConnectionsRequestPrivate &other,
                                   TerminateClientVpnConnectionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(TerminateClientVpnConnectionsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
