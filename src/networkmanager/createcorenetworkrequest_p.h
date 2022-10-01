// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECORENETWORKREQUEST_P_H
#define QTAWS_CREATECORENETWORKREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "createcorenetworkrequest.h"

namespace QtAws {
namespace NetworkManager {

class CreateCoreNetworkRequest;

class CreateCoreNetworkRequestPrivate : public NetworkManagerRequestPrivate {

public:
    CreateCoreNetworkRequestPrivate(const NetworkManagerRequest::Action action,
                                   CreateCoreNetworkRequest * const q);
    CreateCoreNetworkRequestPrivate(const CreateCoreNetworkRequestPrivate &other,
                                   CreateCoreNetworkRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCoreNetworkRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
