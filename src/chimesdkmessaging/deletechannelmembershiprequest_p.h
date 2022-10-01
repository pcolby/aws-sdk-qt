// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECHANNELMEMBERSHIPREQUEST_P_H
#define QTAWS_DELETECHANNELMEMBERSHIPREQUEST_P_H

#include "chimesdkmessagingrequest_p.h"
#include "deletechannelmembershiprequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class DeleteChannelMembershipRequest;

class DeleteChannelMembershipRequestPrivate : public ChimeSdkMessagingRequestPrivate {

public:
    DeleteChannelMembershipRequestPrivate(const ChimeSdkMessagingRequest::Action action,
                                   DeleteChannelMembershipRequest * const q);
    DeleteChannelMembershipRequestPrivate(const DeleteChannelMembershipRequestPrivate &other,
                                   DeleteChannelMembershipRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteChannelMembershipRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
