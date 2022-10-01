// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELMODERATORSREQUEST_P_H
#define QTAWS_LISTCHANNELMODERATORSREQUEST_P_H

#include "chimesdkmessagingrequest_p.h"
#include "listchannelmoderatorsrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class ListChannelModeratorsRequest;

class ListChannelModeratorsRequestPrivate : public ChimeSdkMessagingRequestPrivate {

public:
    ListChannelModeratorsRequestPrivate(const ChimeSdkMessagingRequest::Action action,
                                   ListChannelModeratorsRequest * const q);
    ListChannelModeratorsRequestPrivate(const ListChannelModeratorsRequestPrivate &other,
                                   ListChannelModeratorsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListChannelModeratorsRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
