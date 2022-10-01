// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENDPOINTGROUPREQUEST_P_H
#define QTAWS_CREATEENDPOINTGROUPREQUEST_P_H

#include "globalacceleratorrequest_p.h"
#include "createendpointgrouprequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class CreateEndpointGroupRequest;

class CreateEndpointGroupRequestPrivate : public GlobalAcceleratorRequestPrivate {

public:
    CreateEndpointGroupRequestPrivate(const GlobalAcceleratorRequest::Action action,
                                   CreateEndpointGroupRequest * const q);
    CreateEndpointGroupRequestPrivate(const CreateEndpointGroupRequestPrivate &other,
                                   CreateEndpointGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateEndpointGroupRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
