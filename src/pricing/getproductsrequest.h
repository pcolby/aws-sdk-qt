// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPRODUCTSREQUEST_H
#define QTAWS_GETPRODUCTSREQUEST_H

#include "pricingrequest.h"

namespace QtAws {
namespace Pricing {

class GetProductsRequestPrivate;

class QTAWSPRICING_EXPORT GetProductsRequest : public PricingRequest {

public:
    GetProductsRequest(const GetProductsRequest &other);
    GetProductsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetProductsRequest)

};

} // namespace Pricing
} // namespace QtAws

#endif
