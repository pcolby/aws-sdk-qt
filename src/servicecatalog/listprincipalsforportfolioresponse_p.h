// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPRINCIPALSFORPORTFOLIORESPONSE_P_H
#define QTAWS_LISTPRINCIPALSFORPORTFOLIORESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class ListPrincipalsForPortfolioResponse;

class ListPrincipalsForPortfolioResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit ListPrincipalsForPortfolioResponsePrivate(ListPrincipalsForPortfolioResponse * const q);

    void parseListPrincipalsForPortfolioResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPrincipalsForPortfolioResponse)
    Q_DISABLE_COPY(ListPrincipalsForPortfolioResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
