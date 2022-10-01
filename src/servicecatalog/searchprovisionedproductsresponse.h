// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHPROVISIONEDPRODUCTSRESPONSE_H
#define QTAWS_SEARCHPROVISIONEDPRODUCTSRESPONSE_H

#include "servicecatalogresponse.h"
#include "searchprovisionedproductsrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class SearchProvisionedProductsResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT SearchProvisionedProductsResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    SearchProvisionedProductsResponse(const SearchProvisionedProductsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchProvisionedProductsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchProvisionedProductsResponse)
    Q_DISABLE_COPY(SearchProvisionedProductsResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
