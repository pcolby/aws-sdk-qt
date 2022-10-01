// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMROUTINGACCELERATORREQUEST_P_H
#define QTAWS_CREATECUSTOMROUTINGACCELERATORREQUEST_P_H

#include "globalacceleratorrequest_p.h"
#include "createcustomroutingacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class CreateCustomRoutingAcceleratorRequest;

class CreateCustomRoutingAcceleratorRequestPrivate : public GlobalAcceleratorRequestPrivate {

public:
    CreateCustomRoutingAcceleratorRequestPrivate(const GlobalAcceleratorRequest::Action action,
                                   CreateCustomRoutingAcceleratorRequest * const q);
    CreateCustomRoutingAcceleratorRequestPrivate(const CreateCustomRoutingAcceleratorRequestPrivate &other,
                                   CreateCustomRoutingAcceleratorRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCustomRoutingAcceleratorRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
