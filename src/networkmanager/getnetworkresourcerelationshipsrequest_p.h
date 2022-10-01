// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKRESOURCERELATIONSHIPSREQUEST_P_H
#define QTAWS_GETNETWORKRESOURCERELATIONSHIPSREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "getnetworkresourcerelationshipsrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetNetworkResourceRelationshipsRequest;

class GetNetworkResourceRelationshipsRequestPrivate : public NetworkManagerRequestPrivate {

public:
    GetNetworkResourceRelationshipsRequestPrivate(const NetworkManagerRequest::Action action,
                                   GetNetworkResourceRelationshipsRequest * const q);
    GetNetworkResourceRelationshipsRequestPrivate(const GetNetworkResourceRelationshipsRequestPrivate &other,
                                   GetNetworkResourceRelationshipsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetNetworkResourceRelationshipsRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
