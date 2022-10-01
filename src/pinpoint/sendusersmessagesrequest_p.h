// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDUSERSMESSAGESREQUEST_P_H
#define QTAWS_SENDUSERSMESSAGESREQUEST_P_H

#include "pinpointrequest_p.h"
#include "sendusersmessagesrequest.h"

namespace QtAws {
namespace Pinpoint {

class SendUsersMessagesRequest;

class SendUsersMessagesRequestPrivate : public PinpointRequestPrivate {

public:
    SendUsersMessagesRequestPrivate(const PinpointRequest::Action action,
                                   SendUsersMessagesRequest * const q);
    SendUsersMessagesRequestPrivate(const SendUsersMessagesRequestPrivate &other,
                                   SendUsersMessagesRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendUsersMessagesRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
