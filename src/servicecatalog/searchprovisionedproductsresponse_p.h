// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHPROVISIONEDPRODUCTSRESPONSE_P_H
#define QTAWS_SEARCHPROVISIONEDPRODUCTSRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class SearchProvisionedProductsResponse;

class SearchProvisionedProductsResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit SearchProvisionedProductsResponsePrivate(SearchProvisionedProductsResponse * const q);

    void parseSearchProvisionedProductsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchProvisionedProductsResponse)
    Q_DISABLE_COPY(SearchProvisionedProductsResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
