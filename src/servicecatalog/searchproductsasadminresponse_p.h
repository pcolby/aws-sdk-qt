// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHPRODUCTSASADMINRESPONSE_P_H
#define QTAWS_SEARCHPRODUCTSASADMINRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class SearchProductsAsAdminResponse;

class SearchProductsAsAdminResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit SearchProductsAsAdminResponsePrivate(SearchProductsAsAdminResponse * const q);

    void parseSearchProductsAsAdminResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchProductsAsAdminResponse)
    Q_DISABLE_COPY(SearchProductsAsAdminResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
