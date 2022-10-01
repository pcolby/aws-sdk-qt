// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCELERATORREQUEST_P_H
#define QTAWS_UPDATEACCELERATORREQUEST_P_H

#include "globalacceleratorrequest_p.h"
#include "updateacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class UpdateAcceleratorRequest;

class UpdateAcceleratorRequestPrivate : public GlobalAcceleratorRequestPrivate {

public:
    UpdateAcceleratorRequestPrivate(const GlobalAcceleratorRequest::Action action,
                                   UpdateAcceleratorRequest * const q);
    UpdateAcceleratorRequestPrivate(const UpdateAcceleratorRequestPrivate &other,
                                   UpdateAcceleratorRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAcceleratorRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
