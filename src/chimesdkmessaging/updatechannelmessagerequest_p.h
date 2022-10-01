// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECHANNELMESSAGEREQUEST_P_H
#define QTAWS_UPDATECHANNELMESSAGEREQUEST_P_H

#include "chimesdkmessagingrequest_p.h"
#include "updatechannelmessagerequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class UpdateChannelMessageRequest;

class UpdateChannelMessageRequestPrivate : public ChimeSdkMessagingRequestPrivate {

public:
    UpdateChannelMessageRequestPrivate(const ChimeSdkMessagingRequest::Action action,
                                   UpdateChannelMessageRequest * const q);
    UpdateChannelMessageRequestPrivate(const UpdateChannelMessageRequestPrivate &other,
                                   UpdateChannelMessageRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateChannelMessageRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
