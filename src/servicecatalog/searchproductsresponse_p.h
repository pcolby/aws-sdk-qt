// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHPRODUCTSRESPONSE_P_H
#define QTAWS_SEARCHPRODUCTSRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class SearchProductsResponse;

class SearchProductsResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit SearchProductsResponsePrivate(SearchProductsResponse * const q);

    void parseSearchProductsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchProductsResponse)
    Q_DISABLE_COPY(SearchProductsResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
