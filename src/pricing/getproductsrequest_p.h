// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPRODUCTSREQUEST_P_H
#define QTAWS_GETPRODUCTSREQUEST_P_H

#include "pricingrequest_p.h"
#include "getproductsrequest.h"

namespace QtAws {
namespace Pricing {

class GetProductsRequest;

class GetProductsRequestPrivate : public PricingRequestPrivate {

public:
    GetProductsRequestPrivate(const PricingRequest::Action action,
                                   GetProductsRequest * const q);
    GetProductsRequestPrivate(const GetProductsRequestPrivate &other,
                                   GetProductsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetProductsRequest)

};

} // namespace Pricing
} // namespace QtAws

#endif
