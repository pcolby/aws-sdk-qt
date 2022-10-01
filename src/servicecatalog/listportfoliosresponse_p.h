// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPORTFOLIOSRESPONSE_P_H
#define QTAWS_LISTPORTFOLIOSRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class ListPortfoliosResponse;

class ListPortfoliosResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit ListPortfoliosResponsePrivate(ListPortfoliosResponse * const q);

    void parseListPortfoliosResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPortfoliosResponse)
    Q_DISABLE_COPY(ListPortfoliosResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
