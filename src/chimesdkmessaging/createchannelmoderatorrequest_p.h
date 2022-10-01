// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECHANNELMODERATORREQUEST_P_H
#define QTAWS_CREATECHANNELMODERATORREQUEST_P_H

#include "chimesdkmessagingrequest_p.h"
#include "createchannelmoderatorrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class CreateChannelModeratorRequest;

class CreateChannelModeratorRequestPrivate : public ChimeSdkMessagingRequestPrivate {

public:
    CreateChannelModeratorRequestPrivate(const ChimeSdkMessagingRequest::Action action,
                                   CreateChannelModeratorRequest * const q);
    CreateChannelModeratorRequestPrivate(const CreateChannelModeratorRequestPrivate &other,
                                   CreateChannelModeratorRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateChannelModeratorRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
