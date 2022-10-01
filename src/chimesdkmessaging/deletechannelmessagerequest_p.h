// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECHANNELMESSAGEREQUEST_P_H
#define QTAWS_DELETECHANNELMESSAGEREQUEST_P_H

#include "chimesdkmessagingrequest_p.h"
#include "deletechannelmessagerequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class DeleteChannelMessageRequest;

class DeleteChannelMessageRequestPrivate : public ChimeSdkMessagingRequestPrivate {

public:
    DeleteChannelMessageRequestPrivate(const ChimeSdkMessagingRequest::Action action,
                                   DeleteChannelMessageRequest * const q);
    DeleteChannelMessageRequestPrivate(const DeleteChannelMessageRequestPrivate &other,
                                   DeleteChannelMessageRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteChannelMessageRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
