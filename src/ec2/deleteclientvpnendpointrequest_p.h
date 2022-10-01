// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLIENTVPNENDPOINTREQUEST_P_H
#define QTAWS_DELETECLIENTVPNENDPOINTREQUEST_P_H

#include "ec2request_p.h"
#include "deleteclientvpnendpointrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteClientVpnEndpointRequest;

class DeleteClientVpnEndpointRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteClientVpnEndpointRequestPrivate(const Ec2Request::Action action,
                                   DeleteClientVpnEndpointRequest * const q);
    DeleteClientVpnEndpointRequestPrivate(const DeleteClientVpnEndpointRequestPrivate &other,
                                   DeleteClientVpnEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteClientVpnEndpointRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
