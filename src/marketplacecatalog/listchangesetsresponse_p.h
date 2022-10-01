// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANGESETSRESPONSE_P_H
#define QTAWS_LISTCHANGESETSRESPONSE_P_H

#include "marketplacecatalogresponse_p.h"

namespace QtAws {
namespace MarketplaceCatalog {

class ListChangeSetsResponse;

class ListChangeSetsResponsePrivate : public MarketplaceCatalogResponsePrivate {

public:

    explicit ListChangeSetsResponsePrivate(ListChangeSetsResponse * const q);

    void parseListChangeSetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListChangeSetsResponse)
    Q_DISABLE_COPY(ListChangeSetsResponsePrivate)

};

} // namespace MarketplaceCatalog
} // namespace QtAws

#endif
