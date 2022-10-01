// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCORENETWORKPOLICYREQUEST_P_H
#define QTAWS_PUTCORENETWORKPOLICYREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "putcorenetworkpolicyrequest.h"

namespace QtAws {
namespace NetworkManager {

class PutCoreNetworkPolicyRequest;

class PutCoreNetworkPolicyRequestPrivate : public NetworkManagerRequestPrivate {

public:
    PutCoreNetworkPolicyRequestPrivate(const NetworkManagerRequest::Action action,
                                   PutCoreNetworkPolicyRequest * const q);
    PutCoreNetworkPolicyRequestPrivate(const PutCoreNetworkPolicyRequestPrivate &other,
                                   PutCoreNetworkPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutCoreNetworkPolicyRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
