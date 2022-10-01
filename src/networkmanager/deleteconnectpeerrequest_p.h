// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONNECTPEERREQUEST_P_H
#define QTAWS_DELETECONNECTPEERREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "deleteconnectpeerrequest.h"

namespace QtAws {
namespace NetworkManager {

class DeleteConnectPeerRequest;

class DeleteConnectPeerRequestPrivate : public NetworkManagerRequestPrivate {

public:
    DeleteConnectPeerRequestPrivate(const NetworkManagerRequest::Action action,
                                   DeleteConnectPeerRequest * const q);
    DeleteConnectPeerRequestPrivate(const DeleteConnectPeerRequestPrivate &other,
                                   DeleteConnectPeerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteConnectPeerRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
