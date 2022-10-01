// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLYSECURITYGROUPSTOCLIENTVPNTARGETNETWORKREQUEST_P_H
#define QTAWS_APPLYSECURITYGROUPSTOCLIENTVPNTARGETNETWORKREQUEST_P_H

#include "ec2request_p.h"
#include "applysecuritygroupstoclientvpntargetnetworkrequest.h"

namespace QtAws {
namespace Ec2 {

class ApplySecurityGroupsToClientVpnTargetNetworkRequest;

class ApplySecurityGroupsToClientVpnTargetNetworkRequestPrivate : public Ec2RequestPrivate {

public:
    ApplySecurityGroupsToClientVpnTargetNetworkRequestPrivate(const Ec2Request::Action action,
                                   ApplySecurityGroupsToClientVpnTargetNetworkRequest * const q);
    ApplySecurityGroupsToClientVpnTargetNetworkRequestPrivate(const ApplySecurityGroupsToClientVpnTargetNetworkRequestPrivate &other,
                                   ApplySecurityGroupsToClientVpnTargetNetworkRequest * const q);

private:
    Q_DECLARE_PUBLIC(ApplySecurityGroupsToClientVpnTargetNetworkRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
