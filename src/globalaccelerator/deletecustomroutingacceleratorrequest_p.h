// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMROUTINGACCELERATORREQUEST_P_H
#define QTAWS_DELETECUSTOMROUTINGACCELERATORREQUEST_P_H

#include "globalacceleratorrequest_p.h"
#include "deletecustomroutingacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class DeleteCustomRoutingAcceleratorRequest;

class DeleteCustomRoutingAcceleratorRequestPrivate : public GlobalAcceleratorRequestPrivate {

public:
    DeleteCustomRoutingAcceleratorRequestPrivate(const GlobalAcceleratorRequest::Action action,
                                   DeleteCustomRoutingAcceleratorRequest * const q);
    DeleteCustomRoutingAcceleratorRequestPrivate(const DeleteCustomRoutingAcceleratorRequestPrivate &other,
                                   DeleteCustomRoutingAcceleratorRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCustomRoutingAcceleratorRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
