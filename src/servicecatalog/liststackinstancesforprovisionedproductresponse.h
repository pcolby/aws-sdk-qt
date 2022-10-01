// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTACKINSTANCESFORPROVISIONEDPRODUCTRESPONSE_H
#define QTAWS_LISTSTACKINSTANCESFORPROVISIONEDPRODUCTRESPONSE_H

#include "servicecatalogresponse.h"
#include "liststackinstancesforprovisionedproductrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListStackInstancesForProvisionedProductResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT ListStackInstancesForProvisionedProductResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    ListStackInstancesForProvisionedProductResponse(const ListStackInstancesForProvisionedProductRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListStackInstancesForProvisionedProductRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStackInstancesForProvisionedProductResponse)
    Q_DISABLE_COPY(ListStackInstancesForProvisionedProductResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
