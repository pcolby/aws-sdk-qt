// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORDERSREQUEST_P_H
#define QTAWS_LISTORDERSREQUEST_P_H

#include "privatenetworksrequest_p.h"
#include "listordersrequest.h"

namespace QtAws {
namespace PrivateNetworks {

class ListOrdersRequest;

class ListOrdersRequestPrivate : public PrivateNetworksRequestPrivate {

public:
    ListOrdersRequestPrivate(const PrivateNetworksRequest::Action action,
                                   ListOrdersRequest * const q);
    ListOrdersRequestPrivate(const ListOrdersRequestPrivate &other,
                                   ListOrdersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListOrdersRequest)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
