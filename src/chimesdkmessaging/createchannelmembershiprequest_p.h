// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECHANNELMEMBERSHIPREQUEST_P_H
#define QTAWS_CREATECHANNELMEMBERSHIPREQUEST_P_H

#include "chimesdkmessagingrequest_p.h"
#include "createchannelmembershiprequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class CreateChannelMembershipRequest;

class CreateChannelMembershipRequestPrivate : public ChimeSdkMessagingRequestPrivate {

public:
    CreateChannelMembershipRequestPrivate(const ChimeSdkMessagingRequest::Action action,
                                   CreateChannelMembershipRequest * const q);
    CreateChannelMembershipRequestPrivate(const CreateChannelMembershipRequestPrivate &other,
                                   CreateChannelMembershipRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateChannelMembershipRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
