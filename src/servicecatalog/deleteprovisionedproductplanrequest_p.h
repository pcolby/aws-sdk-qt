// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROVISIONEDPRODUCTPLANREQUEST_P_H
#define QTAWS_DELETEPROVISIONEDPRODUCTPLANREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "deleteprovisionedproductplanrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DeleteProvisionedProductPlanRequest;

class DeleteProvisionedProductPlanRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    DeleteProvisionedProductPlanRequestPrivate(const ServiceCatalogRequest::Action action,
                                   DeleteProvisionedProductPlanRequest * const q);
    DeleteProvisionedProductPlanRequestPrivate(const DeleteProvisionedProductPlanRequestPrivate &other,
                                   DeleteProvisionedProductPlanRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteProvisionedProductPlanRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
