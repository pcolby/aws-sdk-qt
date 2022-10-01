// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ALLOCATEIPAMPOOLCIDRREQUEST_P_H
#define QTAWS_ALLOCATEIPAMPOOLCIDRREQUEST_P_H

#include "ec2request_p.h"
#include "allocateipampoolcidrrequest.h"

namespace QtAws {
namespace Ec2 {

class AllocateIpamPoolCidrRequest;

class AllocateIpamPoolCidrRequestPrivate : public Ec2RequestPrivate {

public:
    AllocateIpamPoolCidrRequestPrivate(const Ec2Request::Action action,
                                   AllocateIpamPoolCidrRequest * const q);
    AllocateIpamPoolCidrRequestPrivate(const AllocateIpamPoolCidrRequestPrivate &other,
                                   AllocateIpamPoolCidrRequest * const q);

private:
    Q_DECLARE_PUBLIC(AllocateIpamPoolCidrRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
