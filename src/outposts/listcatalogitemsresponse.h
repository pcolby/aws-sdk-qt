// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCATALOGITEMSRESPONSE_H
#define QTAWS_LISTCATALOGITEMSRESPONSE_H

#include "outpostsresponse.h"
#include "listcatalogitemsrequest.h"

namespace QtAws {
namespace Outposts {

class ListCatalogItemsResponsePrivate;

class QTAWSOUTPOSTS_EXPORT ListCatalogItemsResponse : public OutpostsResponse {
    Q_OBJECT

public:
    ListCatalogItemsResponse(const ListCatalogItemsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCatalogItemsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCatalogItemsResponse)
    Q_DISABLE_COPY(ListCatalogItemsResponse)

};

} // namespace Outposts
} // namespace QtAws

#endif
