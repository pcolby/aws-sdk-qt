// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIPAMPOOLALLOCATIONSREQUEST_P_H
#define QTAWS_GETIPAMPOOLALLOCATIONSREQUEST_P_H

#include "ec2request_p.h"
#include "getipampoolallocationsrequest.h"

namespace QtAws {
namespace Ec2 {

class GetIpamPoolAllocationsRequest;

class GetIpamPoolAllocationsRequestPrivate : public Ec2RequestPrivate {

public:
    GetIpamPoolAllocationsRequestPrivate(const Ec2Request::Action action,
                                   GetIpamPoolAllocationsRequest * const q);
    GetIpamPoolAllocationsRequestPrivate(const GetIpamPoolAllocationsRequestPrivate &other,
                                   GetIpamPoolAllocationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetIpamPoolAllocationsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
