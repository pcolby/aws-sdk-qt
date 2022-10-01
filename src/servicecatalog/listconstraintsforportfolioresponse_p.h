// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONSTRAINTSFORPORTFOLIORESPONSE_P_H
#define QTAWS_LISTCONSTRAINTSFORPORTFOLIORESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class ListConstraintsForPortfolioResponse;

class ListConstraintsForPortfolioResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit ListConstraintsForPortfolioResponsePrivate(ListConstraintsForPortfolioResponse * const q);

    void parseListConstraintsForPortfolioResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListConstraintsForPortfolioResponse)
    Q_DISABLE_COPY(ListConstraintsForPortfolioResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
