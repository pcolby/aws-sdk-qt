// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTSTREAMREQUEST_P_H
#define QTAWS_DELETEEVENTSTREAMREQUEST_P_H

#include "pinpointrequest_p.h"
#include "deleteeventstreamrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteEventStreamRequest;

class DeleteEventStreamRequestPrivate : public PinpointRequestPrivate {

public:
    DeleteEventStreamRequestPrivate(const PinpointRequest::Action action,
                                   DeleteEventStreamRequest * const q);
    DeleteEventStreamRequestPrivate(const DeleteEventStreamRequestPrivate &other,
                                   DeleteEventStreamRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEventStreamRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
