// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPNCONNECTIONREQUEST_P_H
#define QTAWS_DELETEVPNCONNECTIONREQUEST_P_H

#include "ec2request_p.h"
#include "deletevpnconnectionrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteVpnConnectionRequest;

class DeleteVpnConnectionRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteVpnConnectionRequestPrivate(const Ec2Request::Action action,
                                   DeleteVpnConnectionRequest * const q);
    DeleteVpnConnectionRequestPrivate(const DeleteVpnConnectionRequestPrivate &other,
                                   DeleteVpnConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVpnConnectionRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
