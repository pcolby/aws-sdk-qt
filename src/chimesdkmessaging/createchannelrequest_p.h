// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECHANNELREQUEST_P_H
#define QTAWS_CREATECHANNELREQUEST_P_H

#include "chimesdkmessagingrequest_p.h"
#include "createchannelrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class CreateChannelRequest;

class CreateChannelRequestPrivate : public ChimeSdkMessagingRequestPrivate {

public:
    CreateChannelRequestPrivate(const ChimeSdkMessagingRequest::Action action,
                                   CreateChannelRequest * const q);
    CreateChannelRequestPrivate(const CreateChannelRequestPrivate &other,
                                   CreateChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateChannelRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
