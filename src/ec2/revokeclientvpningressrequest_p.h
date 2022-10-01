// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKECLIENTVPNINGRESSREQUEST_P_H
#define QTAWS_REVOKECLIENTVPNINGRESSREQUEST_P_H

#include "ec2request_p.h"
#include "revokeclientvpningressrequest.h"

namespace QtAws {
namespace Ec2 {

class RevokeClientVpnIngressRequest;

class RevokeClientVpnIngressRequestPrivate : public Ec2RequestPrivate {

public:
    RevokeClientVpnIngressRequestPrivate(const Ec2Request::Action action,
                                   RevokeClientVpnIngressRequest * const q);
    RevokeClientVpnIngressRequestPrivate(const RevokeClientVpnIngressRequestPrivate &other,
                                   RevokeClientVpnIngressRequest * const q);

private:
    Q_DECLARE_PUBLIC(RevokeClientVpnIngressRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
