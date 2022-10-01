// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROVISIONEDPRODUCTPLANREQUEST_P_H
#define QTAWS_CREATEPROVISIONEDPRODUCTPLANREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "createprovisionedproductplanrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class CreateProvisionedProductPlanRequest;

class CreateProvisionedProductPlanRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    CreateProvisionedProductPlanRequestPrivate(const ServiceCatalogRequest::Action action,
                                   CreateProvisionedProductPlanRequest * const q);
    CreateProvisionedProductPlanRequestPrivate(const CreateProvisionedProductPlanRequestPrivate &other,
                                   CreateProvisionedProductPlanRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateProvisionedProductPlanRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
