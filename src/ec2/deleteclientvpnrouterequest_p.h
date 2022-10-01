// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLIENTVPNROUTEREQUEST_P_H
#define QTAWS_DELETECLIENTVPNROUTEREQUEST_P_H

#include "ec2request_p.h"
#include "deleteclientvpnrouterequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteClientVpnRouteRequest;

class DeleteClientVpnRouteRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteClientVpnRouteRequestPrivate(const Ec2Request::Action action,
                                   DeleteClientVpnRouteRequest * const q);
    DeleteClientVpnRouteRequestPrivate(const DeleteClientVpnRouteRequestPrivate &other,
                                   DeleteClientVpnRouteRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteClientVpnRouteRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
