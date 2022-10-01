// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTORECORENETWORKPOLICYVERSIONREQUEST_P_H
#define QTAWS_RESTORECORENETWORKPOLICYVERSIONREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "restorecorenetworkpolicyversionrequest.h"

namespace QtAws {
namespace NetworkManager {

class RestoreCoreNetworkPolicyVersionRequest;

class RestoreCoreNetworkPolicyVersionRequestPrivate : public NetworkManagerRequestPrivate {

public:
    RestoreCoreNetworkPolicyVersionRequestPrivate(const NetworkManagerRequest::Action action,
                                   RestoreCoreNetworkPolicyVersionRequest * const q);
    RestoreCoreNetworkPolicyVersionRequestPrivate(const RestoreCoreNetworkPolicyVersionRequestPrivate &other,
                                   RestoreCoreNetworkPolicyVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(RestoreCoreNetworkPolicyVersionRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
