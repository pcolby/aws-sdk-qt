// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONNECTPEERREQUEST_P_H
#define QTAWS_CREATECONNECTPEERREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "createconnectpeerrequest.h"

namespace QtAws {
namespace NetworkManager {

class CreateConnectPeerRequest;

class CreateConnectPeerRequestPrivate : public NetworkManagerRequestPrivate {

public:
    CreateConnectPeerRequestPrivate(const NetworkManagerRequest::Action action,
                                   CreateConnectPeerRequest * const q);
    CreateConnectPeerRequestPrivate(const CreateConnectPeerRequestPrivate &other,
                                   CreateConnectPeerRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateConnectPeerRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
