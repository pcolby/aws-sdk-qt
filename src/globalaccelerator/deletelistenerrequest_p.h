// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELISTENERREQUEST_P_H
#define QTAWS_DELETELISTENERREQUEST_P_H

#include "globalacceleratorrequest_p.h"
#include "deletelistenerrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class DeleteListenerRequest;

class DeleteListenerRequestPrivate : public GlobalAcceleratorRequestPrivate {

public:
    DeleteListenerRequestPrivate(const GlobalAcceleratorRequest::Action action,
                                   DeleteListenerRequest * const q);
    DeleteListenerRequestPrivate(const DeleteListenerRequestPrivate &other,
                                   DeleteListenerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteListenerRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
