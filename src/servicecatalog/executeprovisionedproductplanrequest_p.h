// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXECUTEPROVISIONEDPRODUCTPLANREQUEST_P_H
#define QTAWS_EXECUTEPROVISIONEDPRODUCTPLANREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "executeprovisionedproductplanrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ExecuteProvisionedProductPlanRequest;

class ExecuteProvisionedProductPlanRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    ExecuteProvisionedProductPlanRequestPrivate(const ServiceCatalogRequest::Action action,
                                   ExecuteProvisionedProductPlanRequest * const q);
    ExecuteProvisionedProductPlanRequestPrivate(const ExecuteProvisionedProductPlanRequestPrivate &other,
                                   ExecuteProvisionedProductPlanRequest * const q);

private:
    Q_DECLARE_PUBLIC(ExecuteProvisionedProductPlanRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
