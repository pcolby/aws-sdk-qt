// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROVISIONIPAMPOOLCIDRREQUEST_P_H
#define QTAWS_PROVISIONIPAMPOOLCIDRREQUEST_P_H

#include "ec2request_p.h"
#include "provisionipampoolcidrrequest.h"

namespace QtAws {
namespace Ec2 {

class ProvisionIpamPoolCidrRequest;

class ProvisionIpamPoolCidrRequestPrivate : public Ec2RequestPrivate {

public:
    ProvisionIpamPoolCidrRequestPrivate(const Ec2Request::Action action,
                                   ProvisionIpamPoolCidrRequest * const q);
    ProvisionIpamPoolCidrRequestPrivate(const ProvisionIpamPoolCidrRequestPrivate &other,
                                   ProvisionIpamPoolCidrRequest * const q);

private:
    Q_DECLARE_PUBLIC(ProvisionIpamPoolCidrRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
