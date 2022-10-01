// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDMESSAGESREQUEST_P_H
#define QTAWS_SENDMESSAGESREQUEST_P_H

#include "pinpointrequest_p.h"
#include "sendmessagesrequest.h"

namespace QtAws {
namespace Pinpoint {

class SendMessagesRequest;

class SendMessagesRequestPrivate : public PinpointRequestPrivate {

public:
    SendMessagesRequestPrivate(const PinpointRequest::Action action,
                                   SendMessagesRequest * const q);
    SendMessagesRequestPrivate(const SendMessagesRequestPrivate &other,
                                   SendMessagesRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendMessagesRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
