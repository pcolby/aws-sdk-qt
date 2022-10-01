// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTPEERREQUEST_P_H
#define QTAWS_GETCONNECTPEERREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "getconnectpeerrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetConnectPeerRequest;

class GetConnectPeerRequestPrivate : public NetworkManagerRequestPrivate {

public:
    GetConnectPeerRequestPrivate(const NetworkManagerRequest::Action action,
                                   GetConnectPeerRequest * const q);
    GetConnectPeerRequestPrivate(const GetConnectPeerRequestPrivate &other,
                                   GetConnectPeerRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetConnectPeerRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
