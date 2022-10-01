// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCEPTEDPORTFOLIOSHARESRESPONSE_P_H
#define QTAWS_LISTACCEPTEDPORTFOLIOSHARESRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class ListAcceptedPortfolioSharesResponse;

class ListAcceptedPortfolioSharesResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit ListAcceptedPortfolioSharesResponsePrivate(ListAcceptedPortfolioSharesResponse * const q);

    void parseListAcceptedPortfolioSharesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAcceptedPortfolioSharesResponse)
    Q_DISABLE_COPY(ListAcceptedPortfolioSharesResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
