// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENETWORKRESOURCEMETADATAREQUEST_P_H
#define QTAWS_UPDATENETWORKRESOURCEMETADATAREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "updatenetworkresourcemetadatarequest.h"

namespace QtAws {
namespace NetworkManager {

class UpdateNetworkResourceMetadataRequest;

class UpdateNetworkResourceMetadataRequestPrivate : public NetworkManagerRequestPrivate {

public:
    UpdateNetworkResourceMetadataRequestPrivate(const NetworkManagerRequest::Action action,
                                   UpdateNetworkResourceMetadataRequest * const q);
    UpdateNetworkResourceMetadataRequestPrivate(const UpdateNetworkResourceMetadataRequestPrivate &other,
                                   UpdateNetworkResourceMetadataRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateNetworkResourceMetadataRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
