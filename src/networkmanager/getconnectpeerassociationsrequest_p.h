// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTPEERASSOCIATIONSREQUEST_P_H
#define QTAWS_GETCONNECTPEERASSOCIATIONSREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "getconnectpeerassociationsrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetConnectPeerAssociationsRequest;

class GetConnectPeerAssociationsRequestPrivate : public NetworkManagerRequestPrivate {

public:
    GetConnectPeerAssociationsRequestPrivate(const NetworkManagerRequest::Action action,
                                   GetConnectPeerAssociationsRequest * const q);
    GetConnectPeerAssociationsRequestPrivate(const GetConnectPeerAssociationsRequestPrivate &other,
                                   GetConnectPeerAssociationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetConnectPeerAssociationsRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
