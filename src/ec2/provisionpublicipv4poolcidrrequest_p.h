// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROVISIONPUBLICIPV4POOLCIDRREQUEST_P_H
#define QTAWS_PROVISIONPUBLICIPV4POOLCIDRREQUEST_P_H

#include "ec2request_p.h"
#include "provisionpublicipv4poolcidrrequest.h"

namespace QtAws {
namespace Ec2 {

class ProvisionPublicIpv4PoolCidrRequest;

class ProvisionPublicIpv4PoolCidrRequestPrivate : public Ec2RequestPrivate {

public:
    ProvisionPublicIpv4PoolCidrRequestPrivate(const Ec2Request::Action action,
                                   ProvisionPublicIpv4PoolCidrRequest * const q);
    ProvisionPublicIpv4PoolCidrRequestPrivate(const ProvisionPublicIpv4PoolCidrRequestPrivate &other,
                                   ProvisionPublicIpv4PoolCidrRequest * const q);

private:
    Q_DECLARE_PUBLIC(ProvisionPublicIpv4PoolCidrRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
