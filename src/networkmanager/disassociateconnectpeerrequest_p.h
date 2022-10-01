// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATECONNECTPEERREQUEST_P_H
#define QTAWS_DISASSOCIATECONNECTPEERREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "disassociateconnectpeerrequest.h"

namespace QtAws {
namespace NetworkManager {

class DisassociateConnectPeerRequest;

class DisassociateConnectPeerRequestPrivate : public NetworkManagerRequestPrivate {

public:
    DisassociateConnectPeerRequestPrivate(const NetworkManagerRequest::Action action,
                                   DisassociateConnectPeerRequest * const q);
    DisassociateConnectPeerRequestPrivate(const DisassociateConnectPeerRequestPrivate &other,
                                   DisassociateConnectPeerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateConnectPeerRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
