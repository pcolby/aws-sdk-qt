// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROVISIONEDPRODUCTPROPERTIESREQUEST_P_H
#define QTAWS_UPDATEPROVISIONEDPRODUCTPROPERTIESREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "updateprovisionedproductpropertiesrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class UpdateProvisionedProductPropertiesRequest;

class UpdateProvisionedProductPropertiesRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    UpdateProvisionedProductPropertiesRequestPrivate(const ServiceCatalogRequest::Action action,
                                   UpdateProvisionedProductPropertiesRequest * const q);
    UpdateProvisionedProductPropertiesRequestPrivate(const UpdateProvisionedProductPropertiesRequestPrivate &other,
                                   UpdateProvisionedProductPropertiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateProvisionedProductPropertiesRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
