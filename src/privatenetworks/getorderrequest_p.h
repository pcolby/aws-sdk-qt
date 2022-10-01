// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETORDERREQUEST_P_H
#define QTAWS_GETORDERREQUEST_P_H

#include "privatenetworksrequest_p.h"
#include "getorderrequest.h"

namespace QtAws {
namespace PrivateNetworks {

class GetOrderRequest;

class GetOrderRequestPrivate : public PrivateNetworksRequestPrivate {

public:
    GetOrderRequestPrivate(const PrivateNetworksRequest::Action action,
                                   GetOrderRequest * const q);
    GetOrderRequestPrivate(const GetOrderRequestPrivate &other,
                                   GetOrderRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetOrderRequest)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
