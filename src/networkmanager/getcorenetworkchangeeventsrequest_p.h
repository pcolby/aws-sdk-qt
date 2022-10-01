// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCORENETWORKCHANGEEVENTSREQUEST_P_H
#define QTAWS_GETCORENETWORKCHANGEEVENTSREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "getcorenetworkchangeeventsrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetCoreNetworkChangeEventsRequest;

class GetCoreNetworkChangeEventsRequestPrivate : public NetworkManagerRequestPrivate {

public:
    GetCoreNetworkChangeEventsRequestPrivate(const NetworkManagerRequest::Action action,
                                   GetCoreNetworkChangeEventsRequest * const q);
    GetCoreNetworkChangeEventsRequestPrivate(const GetCoreNetworkChangeEventsRequestPrivate &other,
                                   GetCoreNetworkChangeEventsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCoreNetworkChangeEventsRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
