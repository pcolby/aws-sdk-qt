// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCORENETWORKREQUEST_P_H
#define QTAWS_GETCORENETWORKREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "getcorenetworkrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetCoreNetworkRequest;

class GetCoreNetworkRequestPrivate : public NetworkManagerRequestPrivate {

public:
    GetCoreNetworkRequestPrivate(const NetworkManagerRequest::Action action,
                                   GetCoreNetworkRequest * const q);
    GetCoreNetworkRequestPrivate(const GetCoreNetworkRequestPrivate &other,
                                   GetCoreNetworkRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCoreNetworkRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
