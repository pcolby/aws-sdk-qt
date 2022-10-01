// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKROUTESREQUEST_P_H
#define QTAWS_GETNETWORKROUTESREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "getnetworkroutesrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetNetworkRoutesRequest;

class GetNetworkRoutesRequestPrivate : public NetworkManagerRequestPrivate {

public:
    GetNetworkRoutesRequestPrivate(const NetworkManagerRequest::Action action,
                                   GetNetworkRoutesRequest * const q);
    GetNetworkRoutesRequestPrivate(const GetNetworkRoutesRequestPrivate &other,
                                   GetNetworkRoutesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetNetworkRoutesRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
