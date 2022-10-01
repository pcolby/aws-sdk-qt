// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATECONNECTPEERREQUEST_P_H
#define QTAWS_ASSOCIATECONNECTPEERREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "associateconnectpeerrequest.h"

namespace QtAws {
namespace NetworkManager {

class AssociateConnectPeerRequest;

class AssociateConnectPeerRequestPrivate : public NetworkManagerRequestPrivate {

public:
    AssociateConnectPeerRequestPrivate(const NetworkManagerRequest::Action action,
                                   AssociateConnectPeerRequest * const q);
    AssociateConnectPeerRequestPrivate(const AssociateConnectPeerRequestPrivate &other,
                                   AssociateConnectPeerRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateConnectPeerRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
