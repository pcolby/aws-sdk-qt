// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHPRODUCTSRESPONSE_H
#define QTAWS_SEARCHPRODUCTSRESPONSE_H

#include "servicecatalogresponse.h"
#include "searchproductsrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class SearchProductsResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT SearchProductsResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    SearchProductsResponse(const SearchProductsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchProductsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchProductsResponse)
    Q_DISABLE_COPY(SearchProductsResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
