// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCORENETWORKCHANGESETREQUEST_P_H
#define QTAWS_GETCORENETWORKCHANGESETREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "getcorenetworkchangesetrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetCoreNetworkChangeSetRequest;

class GetCoreNetworkChangeSetRequestPrivate : public NetworkManagerRequestPrivate {

public:
    GetCoreNetworkChangeSetRequestPrivate(const NetworkManagerRequest::Action action,
                                   GetCoreNetworkChangeSetRequest * const q);
    GetCoreNetworkChangeSetRequestPrivate(const GetCoreNetworkChangeSetRequestPrivate &other,
                                   GetCoreNetworkChangeSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCoreNetworkChangeSetRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
