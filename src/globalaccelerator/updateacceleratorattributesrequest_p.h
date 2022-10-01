// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCELERATORATTRIBUTESREQUEST_P_H
#define QTAWS_UPDATEACCELERATORATTRIBUTESREQUEST_P_H

#include "globalacceleratorrequest_p.h"
#include "updateacceleratorattributesrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class UpdateAcceleratorAttributesRequest;

class UpdateAcceleratorAttributesRequestPrivate : public GlobalAcceleratorRequestPrivate {

public:
    UpdateAcceleratorAttributesRequestPrivate(const GlobalAcceleratorRequest::Action action,
                                   UpdateAcceleratorAttributesRequest * const q);
    UpdateAcceleratorAttributesRequestPrivate(const UpdateAcceleratorAttributesRequestPrivate &other,
                                   UpdateAcceleratorAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAcceleratorAttributesRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
