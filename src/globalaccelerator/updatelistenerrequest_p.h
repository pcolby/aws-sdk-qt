// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELISTENERREQUEST_P_H
#define QTAWS_UPDATELISTENERREQUEST_P_H

#include "globalacceleratorrequest_p.h"
#include "updatelistenerrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class UpdateListenerRequest;

class UpdateListenerRequestPrivate : public GlobalAcceleratorRequestPrivate {

public:
    UpdateListenerRequestPrivate(const GlobalAcceleratorRequest::Action action,
                                   UpdateListenerRequest * const q);
    UpdateListenerRequestPrivate(const UpdateListenerRequestPrivate &other,
                                   UpdateListenerRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateListenerRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
