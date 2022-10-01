// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIPAMPOOLCIDRSREQUEST_P_H
#define QTAWS_GETIPAMPOOLCIDRSREQUEST_P_H

#include "ec2request_p.h"
#include "getipampoolcidrsrequest.h"

namespace QtAws {
namespace Ec2 {

class GetIpamPoolCidrsRequest;

class GetIpamPoolCidrsRequestPrivate : public Ec2RequestPrivate {

public:
    GetIpamPoolCidrsRequestPrivate(const Ec2Request::Action action,
                                   GetIpamPoolCidrsRequest * const q);
    GetIpamPoolCidrsRequestPrivate(const GetIpamPoolCidrsRequestPrivate &other,
                                   GetIpamPoolCidrsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetIpamPoolCidrsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
