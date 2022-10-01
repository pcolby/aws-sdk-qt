// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DENYCUSTOMROUTINGTRAFFICREQUEST_P_H
#define QTAWS_DENYCUSTOMROUTINGTRAFFICREQUEST_P_H

#include "globalacceleratorrequest_p.h"
#include "denycustomroutingtrafficrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class DenyCustomRoutingTrafficRequest;

class DenyCustomRoutingTrafficRequestPrivate : public GlobalAcceleratorRequestPrivate {

public:
    DenyCustomRoutingTrafficRequestPrivate(const GlobalAcceleratorRequest::Action action,
                                   DenyCustomRoutingTrafficRequest * const q);
    DenyCustomRoutingTrafficRequestPrivate(const DenyCustomRoutingTrafficRequestPrivate &other,
                                   DenyCustomRoutingTrafficRequest * const q);

private:
    Q_DECLARE_PUBLIC(DenyCustomRoutingTrafficRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
