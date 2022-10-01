// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECHANNELBANREQUEST_P_H
#define QTAWS_CREATECHANNELBANREQUEST_P_H

#include "chimesdkmessagingrequest_p.h"
#include "createchannelbanrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class CreateChannelBanRequest;

class CreateChannelBanRequestPrivate : public ChimeSdkMessagingRequestPrivate {

public:
    CreateChannelBanRequestPrivate(const ChimeSdkMessagingRequest::Action action,
                                   CreateChannelBanRequest * const q);
    CreateChannelBanRequestPrivate(const CreateChannelBanRequestPrivate &other,
                                   CreateChannelBanRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateChannelBanRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
