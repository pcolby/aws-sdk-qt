// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPRODUCTSRESPONSE_P_H
#define QTAWS_GETPRODUCTSRESPONSE_P_H

#include "pricingresponse_p.h"

namespace QtAws {
namespace Pricing {

class GetProductsResponse;

class GetProductsResponsePrivate : public PricingResponsePrivate {

public:

    explicit GetProductsResponsePrivate(GetProductsResponse * const q);

    void parseGetProductsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetProductsResponse)
    Q_DISABLE_COPY(GetProductsResponsePrivate)

};

} // namespace Pricing
} // namespace QtAws

#endif
