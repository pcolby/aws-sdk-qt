// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPORTFOLIOSHARERESPONSE_P_H
#define QTAWS_DELETEPORTFOLIOSHARERESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class DeletePortfolioShareResponse;

class DeletePortfolioShareResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit DeletePortfolioShareResponsePrivate(DeletePortfolioShareResponse * const q);

    void parseDeletePortfolioShareResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePortfolioShareResponse)
    Q_DISABLE_COPY(DeletePortfolioShareResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
