// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECUSTOMROUTINGACCELERATORATTRIBUTESREQUEST_P_H
#define QTAWS_UPDATECUSTOMROUTINGACCELERATORATTRIBUTESREQUEST_P_H

#include "globalacceleratorrequest_p.h"
#include "updatecustomroutingacceleratorattributesrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class UpdateCustomRoutingAcceleratorAttributesRequest;

class UpdateCustomRoutingAcceleratorAttributesRequestPrivate : public GlobalAcceleratorRequestPrivate {

public:
    UpdateCustomRoutingAcceleratorAttributesRequestPrivate(const GlobalAcceleratorRequest::Action action,
                                   UpdateCustomRoutingAcceleratorAttributesRequest * const q);
    UpdateCustomRoutingAcceleratorAttributesRequestPrivate(const UpdateCustomRoutingAcceleratorAttributesRequestPrivate &other,
                                   UpdateCustomRoutingAcceleratorAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateCustomRoutingAcceleratorAttributesRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
