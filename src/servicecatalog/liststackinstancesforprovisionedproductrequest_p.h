// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTACKINSTANCESFORPROVISIONEDPRODUCTREQUEST_P_H
#define QTAWS_LISTSTACKINSTANCESFORPROVISIONEDPRODUCTREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "liststackinstancesforprovisionedproductrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListStackInstancesForProvisionedProductRequest;

class ListStackInstancesForProvisionedProductRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    ListStackInstancesForProvisionedProductRequestPrivate(const ServiceCatalogRequest::Action action,
                                   ListStackInstancesForProvisionedProductRequest * const q);
    ListStackInstancesForProvisionedProductRequestPrivate(const ListStackInstancesForProvisionedProductRequestPrivate &other,
                                   ListStackInstancesForProvisionedProductRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListStackInstancesForProvisionedProductRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
