// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ALLOWCUSTOMROUTINGTRAFFICREQUEST_P_H
#define QTAWS_ALLOWCUSTOMROUTINGTRAFFICREQUEST_P_H

#include "globalacceleratorrequest_p.h"
#include "allowcustomroutingtrafficrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class AllowCustomRoutingTrafficRequest;

class AllowCustomRoutingTrafficRequestPrivate : public GlobalAcceleratorRequestPrivate {

public:
    AllowCustomRoutingTrafficRequestPrivate(const GlobalAcceleratorRequest::Action action,
                                   AllowCustomRoutingTrafficRequest * const q);
    AllowCustomRoutingTrafficRequestPrivate(const AllowCustomRoutingTrafficRequestPrivate &other,
                                   AllowCustomRoutingTrafficRequest * const q);

private:
    Q_DECLARE_PUBLIC(AllowCustomRoutingTrafficRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
