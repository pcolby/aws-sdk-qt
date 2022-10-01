// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPORTFOLIOACCESSRESPONSE_P_H
#define QTAWS_LISTPORTFOLIOACCESSRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class ListPortfolioAccessResponse;

class ListPortfolioAccessResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit ListPortfolioAccessResponsePrivate(ListPortfolioAccessResponse * const q);

    void parseListPortfolioAccessResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPortfolioAccessResponse)
    Q_DISABLE_COPY(ListPortfolioAccessResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
