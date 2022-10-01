// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGLOBALNETWORKREQUEST_P_H
#define QTAWS_CREATEGLOBALNETWORKREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "createglobalnetworkrequest.h"

namespace QtAws {
namespace NetworkManager {

class CreateGlobalNetworkRequest;

class CreateGlobalNetworkRequestPrivate : public NetworkManagerRequestPrivate {

public:
    CreateGlobalNetworkRequestPrivate(const NetworkManagerRequest::Action action,
                                   CreateGlobalNetworkRequest * const q);
    CreateGlobalNetworkRequestPrivate(const CreateGlobalNetworkRequestPrivate &other,
                                   CreateGlobalNetworkRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateGlobalNetworkRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
