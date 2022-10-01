// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCATALOGITEMSREQUEST_P_H
#define QTAWS_LISTCATALOGITEMSREQUEST_P_H

#include "outpostsrequest_p.h"
#include "listcatalogitemsrequest.h"

namespace QtAws {
namespace Outposts {

class ListCatalogItemsRequest;

class ListCatalogItemsRequestPrivate : public OutpostsRequestPrivate {

public:
    ListCatalogItemsRequestPrivate(const OutpostsRequest::Action action,
                                   ListCatalogItemsRequest * const q);
    ListCatalogItemsRequestPrivate(const ListCatalogItemsRequestPrivate &other,
                                   ListCatalogItemsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCatalogItemsRequest)

};

} // namespace Outposts
} // namespace QtAws

#endif
