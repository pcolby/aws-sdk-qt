// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEVENTSTREAMREQUEST_P_H
#define QTAWS_PUTEVENTSTREAMREQUEST_P_H

#include "pinpointrequest_p.h"
#include "puteventstreamrequest.h"

namespace QtAws {
namespace Pinpoint {

class PutEventStreamRequest;

class PutEventStreamRequestPrivate : public PinpointRequestPrivate {

public:
    PutEventStreamRequestPrivate(const PinpointRequest::Action action,
                                   PutEventStreamRequest * const q);
    PutEventStreamRequestPrivate(const PutEventStreamRequestPrivate &other,
                                   PutEventStreamRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutEventStreamRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
