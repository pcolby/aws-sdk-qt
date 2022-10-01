// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECHANNELBANREQUEST_P_H
#define QTAWS_DELETECHANNELBANREQUEST_P_H

#include "chimesdkmessagingrequest_p.h"
#include "deletechannelbanrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class DeleteChannelBanRequest;

class DeleteChannelBanRequestPrivate : public ChimeSdkMessagingRequestPrivate {

public:
    DeleteChannelBanRequestPrivate(const ChimeSdkMessagingRequest::Action action,
                                   DeleteChannelBanRequest * const q);
    DeleteChannelBanRequestPrivate(const DeleteChannelBanRequestPrivate &other,
                                   DeleteChannelBanRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteChannelBanRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
