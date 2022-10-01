// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECORENETWORKPOLICYVERSIONREQUEST_P_H
#define QTAWS_DELETECORENETWORKPOLICYVERSIONREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "deletecorenetworkpolicyversionrequest.h"

namespace QtAws {
namespace NetworkManager {

class DeleteCoreNetworkPolicyVersionRequest;

class DeleteCoreNetworkPolicyVersionRequestPrivate : public NetworkManagerRequestPrivate {

public:
    DeleteCoreNetworkPolicyVersionRequestPrivate(const NetworkManagerRequest::Action action,
                                   DeleteCoreNetworkPolicyVersionRequest * const q);
    DeleteCoreNetworkPolicyVersionRequestPrivate(const DeleteCoreNetworkPolicyVersionRequestPrivate &other,
                                   DeleteCoreNetworkPolicyVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCoreNetworkPolicyVersionRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
