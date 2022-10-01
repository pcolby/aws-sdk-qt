// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENDPOINTGROUPREQUEST_P_H
#define QTAWS_UPDATEENDPOINTGROUPREQUEST_P_H

#include "globalacceleratorrequest_p.h"
#include "updateendpointgrouprequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class UpdateEndpointGroupRequest;

class UpdateEndpointGroupRequestPrivate : public GlobalAcceleratorRequestPrivate {

public:
    UpdateEndpointGroupRequestPrivate(const GlobalAcceleratorRequest::Action action,
                                   UpdateEndpointGroupRequest * const q);
    UpdateEndpointGroupRequestPrivate(const UpdateEndpointGroupRequestPrivate &other,
                                   UpdateEndpointGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateEndpointGroupRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
