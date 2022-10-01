// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKREQUEST_P_H
#define QTAWS_DELETENETWORKREQUEST_P_H

#include "privatenetworksrequest_p.h"
#include "deletenetworkrequest.h"

namespace QtAws {
namespace PrivateNetworks {

class DeleteNetworkRequest;

class DeleteNetworkRequestPrivate : public PrivateNetworksRequestPrivate {

public:
    DeleteNetworkRequestPrivate(const PrivateNetworksRequest::Action action,
                                   DeleteNetworkRequest * const q);
    DeleteNetworkRequestPrivate(const DeleteNetworkRequestPrivate &other,
                                   DeleteNetworkRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteNetworkRequest)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
