// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADVERTISEBYOIPCIDRREQUEST_P_H
#define QTAWS_ADVERTISEBYOIPCIDRREQUEST_P_H

#include "ec2request_p.h"
#include "advertisebyoipcidrrequest.h"

namespace QtAws {
namespace Ec2 {

class AdvertiseByoipCidrRequest;

class AdvertiseByoipCidrRequestPrivate : public Ec2RequestPrivate {

public:
    AdvertiseByoipCidrRequestPrivate(const Ec2Request::Action action,
                                   AdvertiseByoipCidrRequest * const q);
    AdvertiseByoipCidrRequestPrivate(const AdvertiseByoipCidrRequestPrivate &other,
                                   AdvertiseByoipCidrRequest * const q);

private:
    Q_DECLARE_PUBLIC(AdvertiseByoipCidrRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
