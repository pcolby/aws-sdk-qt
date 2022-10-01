// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANGESETSRESPONSE_H
#define QTAWS_LISTCHANGESETSRESPONSE_H

#include "marketplacecatalogresponse.h"
#include "listchangesetsrequest.h"

namespace QtAws {
namespace MarketplaceCatalog {

class ListChangeSetsResponsePrivate;

class QTAWSMARKETPLACECATALOG_EXPORT ListChangeSetsResponse : public MarketplaceCatalogResponse {
    Q_OBJECT

public:
    ListChangeSetsResponse(const ListChangeSetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListChangeSetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListChangeSetsResponse)
    Q_DISABLE_COPY(ListChangeSetsResponse)

};

} // namespace MarketplaceCatalog
} // namespace QtAws

#endif
