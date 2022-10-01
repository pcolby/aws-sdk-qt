// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SCANPROVISIONEDPRODUCTSRESPONSE_P_H
#define QTAWS_SCANPROVISIONEDPRODUCTSRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class ScanProvisionedProductsResponse;

class ScanProvisionedProductsResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit ScanProvisionedProductsResponsePrivate(ScanProvisionedProductsResponse * const q);

    void parseScanProvisionedProductsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ScanProvisionedProductsResponse)
    Q_DISABLE_COPY(ScanProvisionedProductsResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
