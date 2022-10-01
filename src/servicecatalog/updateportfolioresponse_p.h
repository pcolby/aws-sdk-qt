// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPORTFOLIORESPONSE_P_H
#define QTAWS_UPDATEPORTFOLIORESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class UpdatePortfolioResponse;

class UpdatePortfolioResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit UpdatePortfolioResponsePrivate(UpdatePortfolioResponse * const q);

    void parseUpdatePortfolioResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdatePortfolioResponse)
    Q_DISABLE_COPY(UpdatePortfolioResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
