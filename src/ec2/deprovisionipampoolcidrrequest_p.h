// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEPROVISIONIPAMPOOLCIDRREQUEST_P_H
#define QTAWS_DEPROVISIONIPAMPOOLCIDRREQUEST_P_H

#include "ec2request_p.h"
#include "deprovisionipampoolcidrrequest.h"

namespace QtAws {
namespace Ec2 {

class DeprovisionIpamPoolCidrRequest;

class DeprovisionIpamPoolCidrRequestPrivate : public Ec2RequestPrivate {

public:
    DeprovisionIpamPoolCidrRequestPrivate(const Ec2Request::Action action,
                                   DeprovisionIpamPoolCidrRequest * const q);
    DeprovisionIpamPoolCidrRequestPrivate(const DeprovisionIpamPoolCidrRequestPrivate &other,
                                   DeprovisionIpamPoolCidrRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeprovisionIpamPoolCidrRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
