// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENDPOINTGROUPREQUEST_P_H
#define QTAWS_DELETEENDPOINTGROUPREQUEST_P_H

#include "globalacceleratorrequest_p.h"
#include "deleteendpointgrouprequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class DeleteEndpointGroupRequest;

class DeleteEndpointGroupRequestPrivate : public GlobalAcceleratorRequestPrivate {

public:
    DeleteEndpointGroupRequestPrivate(const GlobalAcceleratorRequest::Action action,
                                   DeleteEndpointGroupRequest * const q);
    DeleteEndpointGroupRequestPrivate(const DeleteEndpointGroupRequestPrivate &other,
                                   DeleteEndpointGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEndpointGroupRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
