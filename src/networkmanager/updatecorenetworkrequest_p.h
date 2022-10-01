// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECORENETWORKREQUEST_P_H
#define QTAWS_UPDATECORENETWORKREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "updatecorenetworkrequest.h"

namespace QtAws {
namespace NetworkManager {

class UpdateCoreNetworkRequest;

class UpdateCoreNetworkRequestPrivate : public NetworkManagerRequestPrivate {

public:
    UpdateCoreNetworkRequestPrivate(const NetworkManagerRequest::Action action,
                                   UpdateCoreNetworkRequest * const q);
    UpdateCoreNetworkRequestPrivate(const UpdateCoreNetworkRequestPrivate &other,
                                   UpdateCoreNetworkRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateCoreNetworkRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
