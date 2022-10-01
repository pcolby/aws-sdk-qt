// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SCANPROVISIONEDPRODUCTSRESPONSE_H
#define QTAWS_SCANPROVISIONEDPRODUCTSRESPONSE_H

#include "servicecatalogresponse.h"
#include "scanprovisionedproductsrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ScanProvisionedProductsResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT ScanProvisionedProductsResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    ScanProvisionedProductsResponse(const ScanProvisionedProductsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ScanProvisionedProductsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ScanProvisionedProductsResponse)
    Q_DISABLE_COPY(ScanProvisionedProductsResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
