// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHTHINGPRINCIPALREQUEST_P_H
#define QTAWS_DETACHTHINGPRINCIPALREQUEST_P_H

#include "iotrequest_p.h"
#include "detachthingprincipalrequest.h"

namespace QtAws {
namespace IoT {

class DetachThingPrincipalRequest;

class DetachThingPrincipalRequestPrivate : public IoTRequestPrivate {

public:
    DetachThingPrincipalRequestPrivate(const IoTRequest::Action action,
                                   DetachThingPrincipalRequest * const q);
    DetachThingPrincipalRequestPrivate(const DetachThingPrincipalRequestPrivate &other,
                                   DetachThingPrincipalRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetachThingPrincipalRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
