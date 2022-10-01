// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCHANNELMEMBERSHIPPREFERENCESREQUEST_P_H
#define QTAWS_PUTCHANNELMEMBERSHIPPREFERENCESREQUEST_P_H

#include "chimesdkmessagingrequest_p.h"
#include "putchannelmembershippreferencesrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class PutChannelMembershipPreferencesRequest;

class PutChannelMembershipPreferencesRequestPrivate : public ChimeSdkMessagingRequestPrivate {

public:
    PutChannelMembershipPreferencesRequestPrivate(const ChimeSdkMessagingRequest::Action action,
                                   PutChannelMembershipPreferencesRequest * const q);
    PutChannelMembershipPreferencesRequestPrivate(const PutChannelMembershipPreferencesRequestPrivate &other,
                                   PutChannelMembershipPreferencesRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutChannelMembershipPreferencesRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
