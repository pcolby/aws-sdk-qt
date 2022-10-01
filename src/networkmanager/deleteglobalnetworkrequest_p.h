// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGLOBALNETWORKREQUEST_P_H
#define QTAWS_DELETEGLOBALNETWORKREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "deleteglobalnetworkrequest.h"

namespace QtAws {
namespace NetworkManager {

class DeleteGlobalNetworkRequest;

class DeleteGlobalNetworkRequestPrivate : public NetworkManagerRequestPrivate {

public:
    DeleteGlobalNetworkRequestPrivate(const NetworkManagerRequest::Action action,
                                   DeleteGlobalNetworkRequest * const q);
    DeleteGlobalNetworkRequestPrivate(const DeleteGlobalNetworkRequestPrivate &other,
                                   DeleteGlobalNetworkRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteGlobalNetworkRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
