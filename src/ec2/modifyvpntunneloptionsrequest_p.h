// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVPNTUNNELOPTIONSREQUEST_P_H
#define QTAWS_MODIFYVPNTUNNELOPTIONSREQUEST_P_H

#include "ec2request_p.h"
#include "modifyvpntunneloptionsrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyVpnTunnelOptionsRequest;

class ModifyVpnTunnelOptionsRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyVpnTunnelOptionsRequestPrivate(const Ec2Request::Action action,
                                   ModifyVpnTunnelOptionsRequest * const q);
    ModifyVpnTunnelOptionsRequestPrivate(const ModifyVpnTunnelOptionsRequestPrivate &other,
                                   ModifyVpnTunnelOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyVpnTunnelOptionsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
