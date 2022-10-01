// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXECUTECORENETWORKCHANGESETREQUEST_P_H
#define QTAWS_EXECUTECORENETWORKCHANGESETREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "executecorenetworkchangesetrequest.h"

namespace QtAws {
namespace NetworkManager {

class ExecuteCoreNetworkChangeSetRequest;

class ExecuteCoreNetworkChangeSetRequestPrivate : public NetworkManagerRequestPrivate {

public:
    ExecuteCoreNetworkChangeSetRequestPrivate(const NetworkManagerRequest::Action action,
                                   ExecuteCoreNetworkChangeSetRequest * const q);
    ExecuteCoreNetworkChangeSetRequestPrivate(const ExecuteCoreNetworkChangeSetRequestPrivate &other,
                                   ExecuteCoreNetworkChangeSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(ExecuteCoreNetworkChangeSetRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
