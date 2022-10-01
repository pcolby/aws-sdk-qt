// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANNELMEMBERSHIPPREFERENCESREQUEST_P_H
#define QTAWS_GETCHANNELMEMBERSHIPPREFERENCESREQUEST_P_H

#include "chimesdkmessagingrequest_p.h"
#include "getchannelmembershippreferencesrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class GetChannelMembershipPreferencesRequest;

class GetChannelMembershipPreferencesRequestPrivate : public ChimeSdkMessagingRequestPrivate {

public:
    GetChannelMembershipPreferencesRequestPrivate(const ChimeSdkMessagingRequest::Action action,
                                   GetChannelMembershipPreferencesRequest * const q);
    GetChannelMembershipPreferencesRequestPrivate(const GetChannelMembershipPreferencesRequestPrivate &other,
                                   GetChannelMembershipPreferencesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetChannelMembershipPreferencesRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
