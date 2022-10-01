// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCORENETWORKPOLICYREQUEST_P_H
#define QTAWS_GETCORENETWORKPOLICYREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "getcorenetworkpolicyrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetCoreNetworkPolicyRequest;

class GetCoreNetworkPolicyRequestPrivate : public NetworkManagerRequestPrivate {

public:
    GetCoreNetworkPolicyRequestPrivate(const NetworkManagerRequest::Action action,
                                   GetCoreNetworkPolicyRequest * const q);
    GetCoreNetworkPolicyRequestPrivate(const GetCoreNetworkPolicyRequestPrivate &other,
                                   GetCoreNetworkPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCoreNetworkPolicyRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
