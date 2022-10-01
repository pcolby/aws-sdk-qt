// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROVISIONEDPRODUCTREQUEST_P_H
#define QTAWS_UPDATEPROVISIONEDPRODUCTREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "updateprovisionedproductrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class UpdateProvisionedProductRequest;

class UpdateProvisionedProductRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    UpdateProvisionedProductRequestPrivate(const ServiceCatalogRequest::Action action,
                                   UpdateProvisionedProductRequest * const q);
    UpdateProvisionedProductRequestPrivate(const UpdateProvisionedProductRequestPrivate &other,
                                   UpdateProvisionedProductRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateProvisionedProductRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
