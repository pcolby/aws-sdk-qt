// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTPORTFOLIOSHARERESPONSE_P_H
#define QTAWS_ACCEPTPORTFOLIOSHARERESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class AcceptPortfolioShareResponse;

class AcceptPortfolioShareResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit AcceptPortfolioShareResponsePrivate(AcceptPortfolioShareResponse * const q);

    void parseAcceptPortfolioShareResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AcceptPortfolioShareResponse)
    Q_DISABLE_COPY(AcceptPortfolioShareResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
