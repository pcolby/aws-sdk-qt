// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECORENETWORKREQUEST_P_H
#define QTAWS_DELETECORENETWORKREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "deletecorenetworkrequest.h"

namespace QtAws {
namespace NetworkManager {

class DeleteCoreNetworkRequest;

class DeleteCoreNetworkRequestPrivate : public NetworkManagerRequestPrivate {

public:
    DeleteCoreNetworkRequestPrivate(const NetworkManagerRequest::Action action,
                                   DeleteCoreNetworkRequest * const q);
    DeleteCoreNetworkRequestPrivate(const DeleteCoreNetworkRequestPrivate &other,
                                   DeleteCoreNetworkRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCoreNetworkRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
