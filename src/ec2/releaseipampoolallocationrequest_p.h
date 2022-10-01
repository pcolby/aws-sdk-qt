// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RELEASEIPAMPOOLALLOCATIONREQUEST_P_H
#define QTAWS_RELEASEIPAMPOOLALLOCATIONREQUEST_P_H

#include "ec2request_p.h"
#include "releaseipampoolallocationrequest.h"

namespace QtAws {
namespace Ec2 {

class ReleaseIpamPoolAllocationRequest;

class ReleaseIpamPoolAllocationRequestPrivate : public Ec2RequestPrivate {

public:
    ReleaseIpamPoolAllocationRequestPrivate(const Ec2Request::Action action,
                                   ReleaseIpamPoolAllocationRequest * const q);
    ReleaseIpamPoolAllocationRequestPrivate(const ReleaseIpamPoolAllocationRequestPrivate &other,
                                   ReleaseIpamPoolAllocationRequest * const q);

private:
    Q_DECLARE_PUBLIC(ReleaseIpamPoolAllocationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
