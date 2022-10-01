// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPORTFOLIOSHARERESPONSE_P_H
#define QTAWS_CREATEPORTFOLIOSHARERESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class CreatePortfolioShareResponse;

class CreatePortfolioShareResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit CreatePortfolioShareResponsePrivate(CreatePortfolioShareResponse * const q);

    void parseCreatePortfolioShareResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePortfolioShareResponse)
    Q_DISABLE_COPY(CreatePortfolioShareResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
