// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTACKINSTANCESFORPROVISIONEDPRODUCTRESPONSE_P_H
#define QTAWS_LISTSTACKINSTANCESFORPROVISIONEDPRODUCTRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class ListStackInstancesForProvisionedProductResponse;

class ListStackInstancesForProvisionedProductResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit ListStackInstancesForProvisionedProductResponsePrivate(ListStackInstancesForProvisionedProductResponse * const q);

    void parseListStackInstancesForProvisionedProductResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListStackInstancesForProvisionedProductResponse)
    Q_DISABLE_COPY(ListStackInstancesForProvisionedProductResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
