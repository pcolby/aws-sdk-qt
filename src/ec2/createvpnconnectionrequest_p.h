// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPNCONNECTIONREQUEST_P_H
#define QTAWS_CREATEVPNCONNECTIONREQUEST_P_H

#include "ec2request_p.h"
#include "createvpnconnectionrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateVpnConnectionRequest;

class CreateVpnConnectionRequestPrivate : public Ec2RequestPrivate {

public:
    CreateVpnConnectionRequestPrivate(const Ec2Request::Action action,
                                   CreateVpnConnectionRequest * const q);
    CreateVpnConnectionRequestPrivate(const CreateVpnConnectionRequestPrivate &other,
                                   CreateVpnConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateVpnConnectionRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
