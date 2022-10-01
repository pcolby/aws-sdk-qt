// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCLIENTVPNENDPOINTREQUEST_P_H
#define QTAWS_MODIFYCLIENTVPNENDPOINTREQUEST_P_H

#include "ec2request_p.h"
#include "modifyclientvpnendpointrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyClientVpnEndpointRequest;

class ModifyClientVpnEndpointRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyClientVpnEndpointRequestPrivate(const Ec2Request::Action action,
                                   ModifyClientVpnEndpointRequest * const q);
    ModifyClientVpnEndpointRequestPrivate(const ModifyClientVpnEndpointRequestPrivate &other,
                                   ModifyClientVpnEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyClientVpnEndpointRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
