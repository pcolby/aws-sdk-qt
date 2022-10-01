// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEPROVISIONPUBLICIPV4POOLCIDRREQUEST_P_H
#define QTAWS_DEPROVISIONPUBLICIPV4POOLCIDRREQUEST_P_H

#include "ec2request_p.h"
#include "deprovisionpublicipv4poolcidrrequest.h"

namespace QtAws {
namespace Ec2 {

class DeprovisionPublicIpv4PoolCidrRequest;

class DeprovisionPublicIpv4PoolCidrRequestPrivate : public Ec2RequestPrivate {

public:
    DeprovisionPublicIpv4PoolCidrRequestPrivate(const Ec2Request::Action action,
                                   DeprovisionPublicIpv4PoolCidrRequest * const q);
    DeprovisionPublicIpv4PoolCidrRequestPrivate(const DeprovisionPublicIpv4PoolCidrRequestPrivate &other,
                                   DeprovisionPublicIpv4PoolCidrRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeprovisionPublicIpv4PoolCidrRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
