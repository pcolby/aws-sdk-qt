// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPORTFOLIOSFORPRODUCTRESPONSE_P_H
#define QTAWS_LISTPORTFOLIOSFORPRODUCTRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class ListPortfoliosForProductResponse;

class ListPortfoliosForProductResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit ListPortfoliosForProductResponsePrivate(ListPortfoliosForProductResponse * const q);

    void parseListPortfoliosForProductResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPortfoliosForProductResponse)
    Q_DISABLE_COPY(ListPortfoliosForProductResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
