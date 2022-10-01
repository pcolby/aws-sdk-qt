// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPORTFOLIORESPONSE_P_H
#define QTAWS_DELETEPORTFOLIORESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class DeletePortfolioResponse;

class DeletePortfolioResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit DeletePortfolioResponsePrivate(DeletePortfolioResponse * const q);

    void parseDeletePortfolioResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePortfolioResponse)
    Q_DISABLE_COPY(DeletePortfolioResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
