// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADVERTISEBYOIPCIDRREQUEST_P_H
#define QTAWS_ADVERTISEBYOIPCIDRREQUEST_P_H

#include "globalacceleratorrequest_p.h"
#include "advertisebyoipcidrrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class AdvertiseByoipCidrRequest;

class AdvertiseByoipCidrRequestPrivate : public GlobalAcceleratorRequestPrivate {

public:
    AdvertiseByoipCidrRequestPrivate(const GlobalAcceleratorRequest::Action action,
                                   AdvertiseByoipCidrRequest * const q);
    AdvertiseByoipCidrRequestPrivate(const AdvertiseByoipCidrRequestPrivate &other,
                                   AdvertiseByoipCidrRequest * const q);

private:
    Q_DECLARE_PUBLIC(AdvertiseByoipCidrRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
