// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTPORTFOLIOSHARERESPONSE_P_H
#define QTAWS_REJECTPORTFOLIOSHARERESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class RejectPortfolioShareResponse;

class RejectPortfolioShareResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit RejectPortfolioShareResponsePrivate(RejectPortfolioShareResponse * const q);

    void parseRejectPortfolioShareResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RejectPortfolioShareResponse)
    Q_DISABLE_COPY(RejectPortfolioShareResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
