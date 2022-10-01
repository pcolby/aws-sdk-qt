// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNETWORKSREQUEST_P_H
#define QTAWS_LISTNETWORKSREQUEST_P_H

#include "privatenetworksrequest_p.h"
#include "listnetworksrequest.h"

namespace QtAws {
namespace PrivateNetworks {

class ListNetworksRequest;

class ListNetworksRequestPrivate : public PrivateNetworksRequestPrivate {

public:
    ListNetworksRequestPrivate(const PrivateNetworksRequest::Action action,
                                   ListNetworksRequest * const q);
    ListNetworksRequestPrivate(const ListNetworksRequestPrivate &other,
                                   ListNetworksRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListNetworksRequest)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
