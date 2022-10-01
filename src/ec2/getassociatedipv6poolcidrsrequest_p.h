// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSOCIATEDIPV6POOLCIDRSREQUEST_P_H
#define QTAWS_GETASSOCIATEDIPV6POOLCIDRSREQUEST_P_H

#include "ec2request_p.h"
#include "getassociatedipv6poolcidrsrequest.h"

namespace QtAws {
namespace Ec2 {

class GetAssociatedIpv6PoolCidrsRequest;

class GetAssociatedIpv6PoolCidrsRequestPrivate : public Ec2RequestPrivate {

public:
    GetAssociatedIpv6PoolCidrsRequestPrivate(const Ec2Request::Action action,
                                   GetAssociatedIpv6PoolCidrsRequest * const q);
    GetAssociatedIpv6PoolCidrsRequestPrivate(const GetAssociatedIpv6PoolCidrsRequestPrivate &other,
                                   GetAssociatedIpv6PoolCidrsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAssociatedIpv6PoolCidrsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
