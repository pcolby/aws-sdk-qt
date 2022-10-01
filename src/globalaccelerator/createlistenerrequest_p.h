// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELISTENERREQUEST_P_H
#define QTAWS_CREATELISTENERREQUEST_P_H

#include "globalacceleratorrequest_p.h"
#include "createlistenerrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class CreateListenerRequest;

class CreateListenerRequestPrivate : public GlobalAcceleratorRequestPrivate {

public:
    CreateListenerRequestPrivate(const GlobalAcceleratorRequest::Action action,
                                   CreateListenerRequest * const q);
    CreateListenerRequestPrivate(const CreateListenerRequestPrivate &other,
                                   CreateListenerRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateListenerRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
