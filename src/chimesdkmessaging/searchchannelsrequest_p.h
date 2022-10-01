// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHCHANNELSREQUEST_P_H
#define QTAWS_SEARCHCHANNELSREQUEST_P_H

#include "chimesdkmessagingrequest_p.h"
#include "searchchannelsrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class SearchChannelsRequest;

class SearchChannelsRequestPrivate : public ChimeSdkMessagingRequestPrivate {

public:
    SearchChannelsRequestPrivate(const ChimeSdkMessagingRequest::Action action,
                                   SearchChannelsRequest * const q);
    SearchChannelsRequestPrivate(const SearchChannelsRequestPrivate &other,
                                   SearchChannelsRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchChannelsRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
