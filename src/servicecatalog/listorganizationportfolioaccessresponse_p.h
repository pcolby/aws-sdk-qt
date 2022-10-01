// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORGANIZATIONPORTFOLIOACCESSRESPONSE_P_H
#define QTAWS_LISTORGANIZATIONPORTFOLIOACCESSRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class ListOrganizationPortfolioAccessResponse;

class ListOrganizationPortfolioAccessResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit ListOrganizationPortfolioAccessResponsePrivate(ListOrganizationPortfolioAccessResponse * const q);

    void parseListOrganizationPortfolioAccessResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListOrganizationPortfolioAccessResponse)
    Q_DISABLE_COPY(ListOrganizationPortfolioAccessResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
