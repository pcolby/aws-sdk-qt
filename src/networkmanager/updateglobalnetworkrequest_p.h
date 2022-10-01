// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGLOBALNETWORKREQUEST_P_H
#define QTAWS_UPDATEGLOBALNETWORKREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "updateglobalnetworkrequest.h"

namespace QtAws {
namespace NetworkManager {

class UpdateGlobalNetworkRequest;

class UpdateGlobalNetworkRequestPrivate : public NetworkManagerRequestPrivate {

public:
    UpdateGlobalNetworkRequestPrivate(const NetworkManagerRequest::Action action,
                                   UpdateGlobalNetworkRequest * const q);
    UpdateGlobalNetworkRequestPrivate(const UpdateGlobalNetworkRequestPrivate &other,
                                   UpdateGlobalNetworkRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateGlobalNetworkRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
