// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCELERATORREQUEST_P_H
#define QTAWS_DELETEACCELERATORREQUEST_P_H

#include "globalacceleratorrequest_p.h"
#include "deleteacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class DeleteAcceleratorRequest;

class DeleteAcceleratorRequestPrivate : public GlobalAcceleratorRequestPrivate {

public:
    DeleteAcceleratorRequestPrivate(const GlobalAcceleratorRequest::Action action,
                                   DeleteAcceleratorRequest * const q);
    DeleteAcceleratorRequestPrivate(const DeleteAcceleratorRequestPrivate &other,
                                   DeleteAcceleratorRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAcceleratorRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
