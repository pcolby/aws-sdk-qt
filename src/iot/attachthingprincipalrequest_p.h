// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHTHINGPRINCIPALREQUEST_P_H
#define QTAWS_ATTACHTHINGPRINCIPALREQUEST_P_H

#include "iotrequest_p.h"
#include "attachthingprincipalrequest.h"

namespace QtAws {
namespace IoT {

class AttachThingPrincipalRequest;

class AttachThingPrincipalRequestPrivate : public IoTRequestPrivate {

public:
    AttachThingPrincipalRequestPrivate(const IoTRequest::Action action,
                                   AttachThingPrincipalRequest * const q);
    AttachThingPrincipalRequestPrivate(const AttachThingPrincipalRequestPrivate &other,
                                   AttachThingPrincipalRequest * const q);

private:
    Q_DECLARE_PUBLIC(AttachThingPrincipalRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
