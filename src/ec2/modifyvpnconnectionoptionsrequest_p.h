// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVPNCONNECTIONOPTIONSREQUEST_P_H
#define QTAWS_MODIFYVPNCONNECTIONOPTIONSREQUEST_P_H

#include "ec2request_p.h"
#include "modifyvpnconnectionoptionsrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyVpnConnectionOptionsRequest;

class ModifyVpnConnectionOptionsRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyVpnConnectionOptionsRequestPrivate(const Ec2Request::Action action,
                                   ModifyVpnConnectionOptionsRequest * const q);
    ModifyVpnConnectionOptionsRequestPrivate(const ModifyVpnConnectionOptionsRequestPrivate &other,
                                   ModifyVpnConnectionOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyVpnConnectionOptionsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
