// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTSTREAMREQUEST_P_H
#define QTAWS_GETEVENTSTREAMREQUEST_P_H

#include "pinpointrequest_p.h"
#include "geteventstreamrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetEventStreamRequest;

class GetEventStreamRequestPrivate : public PinpointRequestPrivate {

public:
    GetEventStreamRequestPrivate(const PinpointRequest::Action action,
                                   GetEventStreamRequest * const q);
    GetEventStreamRequestPrivate(const GetEventStreamRequestPrivate &other,
                                   GetEventStreamRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEventStreamRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
