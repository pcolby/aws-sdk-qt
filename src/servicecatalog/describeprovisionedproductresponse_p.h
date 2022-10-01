// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROVISIONEDPRODUCTRESPONSE_P_H
#define QTAWS_DESCRIBEPROVISIONEDPRODUCTRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeProvisionedProductResponse;

class DescribeProvisionedProductResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit DescribeProvisionedProductResponsePrivate(DescribeProvisionedProductResponse * const q);

    void parseDescribeProvisionedProductResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeProvisionedProductResponse)
    Q_DISABLE_COPY(DescribeProvisionedProductResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
