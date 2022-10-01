// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPORTFOLIOSHARERESPONSE_P_H
#define QTAWS_UPDATEPORTFOLIOSHARERESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class UpdatePortfolioShareResponse;

class UpdatePortfolioShareResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit UpdatePortfolioShareResponsePrivate(UpdatePortfolioShareResponse * const q);

    void parseUpdatePortfolioShareResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdatePortfolioShareResponse)
    Q_DISABLE_COPY(UpdatePortfolioShareResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
