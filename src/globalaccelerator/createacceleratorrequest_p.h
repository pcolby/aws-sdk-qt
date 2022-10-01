// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCELERATORREQUEST_P_H
#define QTAWS_CREATEACCELERATORREQUEST_P_H

#include "globalacceleratorrequest_p.h"
#include "createacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class CreateAcceleratorRequest;

class CreateAcceleratorRequestPrivate : public GlobalAcceleratorRequestPrivate {

public:
    CreateAcceleratorRequestPrivate(const GlobalAcceleratorRequest::Action action,
                                   CreateAcceleratorRequest * const q);
    CreateAcceleratorRequestPrivate(const CreateAcceleratorRequestPrivate &other,
                                   CreateAcceleratorRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAcceleratorRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
