// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVPNCONNECTIONREQUEST_P_H
#define QTAWS_MODIFYVPNCONNECTIONREQUEST_P_H

#include "ec2request_p.h"
#include "modifyvpnconnectionrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyVpnConnectionRequest;

class ModifyVpnConnectionRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyVpnConnectionRequestPrivate(const Ec2Request::Action action,
                                   ModifyVpnConnectionRequest * const q);
    ModifyVpnConnectionRequestPrivate(const ModifyVpnConnectionRequestPrivate &other,
                                   ModifyVpnConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyVpnConnectionRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
