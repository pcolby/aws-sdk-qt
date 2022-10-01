// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATECLIENTVPNTARGETNETWORKREQUEST_P_H
#define QTAWS_DISASSOCIATECLIENTVPNTARGETNETWORKREQUEST_P_H

#include "ec2request_p.h"
#include "disassociateclientvpntargetnetworkrequest.h"

namespace QtAws {
namespace Ec2 {

class DisassociateClientVpnTargetNetworkRequest;

class DisassociateClientVpnTargetNetworkRequestPrivate : public Ec2RequestPrivate {

public:
    DisassociateClientVpnTargetNetworkRequestPrivate(const Ec2Request::Action action,
                                   DisassociateClientVpnTargetNetworkRequest * const q);
    DisassociateClientVpnTargetNetworkRequestPrivate(const DisassociateClientVpnTargetNetworkRequestPrivate &other,
                                   DisassociateClientVpnTargetNetworkRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateClientVpnTargetNetworkRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
