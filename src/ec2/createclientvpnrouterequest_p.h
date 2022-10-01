// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLIENTVPNROUTEREQUEST_P_H
#define QTAWS_CREATECLIENTVPNROUTEREQUEST_P_H

#include "ec2request_p.h"
#include "createclientvpnrouterequest.h"

namespace QtAws {
namespace Ec2 {

class CreateClientVpnRouteRequest;

class CreateClientVpnRouteRequestPrivate : public Ec2RequestPrivate {

public:
    CreateClientVpnRouteRequestPrivate(const Ec2Request::Action action,
                                   CreateClientVpnRouteRequest * const q);
    CreateClientVpnRouteRequestPrivate(const CreateClientVpnRouteRequestPrivate &other,
                                   CreateClientVpnRouteRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateClientVpnRouteRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
