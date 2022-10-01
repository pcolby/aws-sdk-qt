// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATECLIENTVPNTARGETNETWORKREQUEST_P_H
#define QTAWS_ASSOCIATECLIENTVPNTARGETNETWORKREQUEST_P_H

#include "ec2request_p.h"
#include "associateclientvpntargetnetworkrequest.h"

namespace QtAws {
namespace Ec2 {

class AssociateClientVpnTargetNetworkRequest;

class AssociateClientVpnTargetNetworkRequestPrivate : public Ec2RequestPrivate {

public:
    AssociateClientVpnTargetNetworkRequestPrivate(const Ec2Request::Action action,
                                   AssociateClientVpnTargetNetworkRequest * const q);
    AssociateClientVpnTargetNetworkRequestPrivate(const AssociateClientVpnTargetNetworkRequestPrivate &other,
                                   AssociateClientVpnTargetNetworkRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateClientVpnTargetNetworkRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
