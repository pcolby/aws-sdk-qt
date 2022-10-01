// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCATALOGITEMSRESPONSE_P_H
#define QTAWS_LISTCATALOGITEMSRESPONSE_P_H

#include "outpostsresponse_p.h"

namespace QtAws {
namespace Outposts {

class ListCatalogItemsResponse;

class ListCatalogItemsResponsePrivate : public OutpostsResponsePrivate {

public:

    explicit ListCatalogItemsResponsePrivate(ListCatalogItemsResponse * const q);

    void parseListCatalogItemsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCatalogItemsResponse)
    Q_DISABLE_COPY(ListCatalogItemsResponsePrivate)

};

} // namespace Outposts
} // namespace QtAws

#endif
