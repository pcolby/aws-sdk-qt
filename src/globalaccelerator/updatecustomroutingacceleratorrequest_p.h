// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECUSTOMROUTINGACCELERATORREQUEST_P_H
#define QTAWS_UPDATECUSTOMROUTINGACCELERATORREQUEST_P_H

#include "globalacceleratorrequest_p.h"
#include "updatecustomroutingacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class UpdateCustomRoutingAcceleratorRequest;

class UpdateCustomRoutingAcceleratorRequestPrivate : public GlobalAcceleratorRequestPrivate {

public:
    UpdateCustomRoutingAcceleratorRequestPrivate(const GlobalAcceleratorRequest::Action action,
                                   UpdateCustomRoutingAcceleratorRequest * const q);
    UpdateCustomRoutingAcceleratorRequestPrivate(const UpdateCustomRoutingAcceleratorRequestPrivate &other,
                                   UpdateCustomRoutingAcceleratorRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateCustomRoutingAcceleratorRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
