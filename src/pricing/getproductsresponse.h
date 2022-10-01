// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPRODUCTSRESPONSE_H
#define QTAWS_GETPRODUCTSRESPONSE_H

#include "pricingresponse.h"
#include "getproductsrequest.h"

namespace QtAws {
namespace Pricing {

class GetProductsResponsePrivate;

class QTAWSPRICING_EXPORT GetProductsResponse : public PricingResponse {
    Q_OBJECT

public:
    GetProductsResponse(const GetProductsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetProductsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetProductsResponse)
    Q_DISABLE_COPY(GetProductsResponse)

};

} // namespace Pricing
} // namespace QtAws

#endif
