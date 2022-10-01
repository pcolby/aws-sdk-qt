// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPORTFOLIORESPONSE_P_H
#define QTAWS_CREATEPORTFOLIORESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class CreatePortfolioResponse;

class CreatePortfolioResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit CreatePortfolioResponsePrivate(CreatePortfolioResponse * const q);

    void parseCreatePortfolioResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePortfolioResponse)
    Q_DISABLE_COPY(CreatePortfolioResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
