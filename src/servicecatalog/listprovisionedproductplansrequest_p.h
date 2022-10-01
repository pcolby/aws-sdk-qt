// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROVISIONEDPRODUCTPLANSREQUEST_P_H
#define QTAWS_LISTPROVISIONEDPRODUCTPLANSREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "listprovisionedproductplansrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListProvisionedProductPlansRequest;

class ListProvisionedProductPlansRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    ListProvisionedProductPlansRequestPrivate(const ServiceCatalogRequest::Action action,
                                   ListProvisionedProductPlansRequest * const q);
    ListProvisionedProductPlansRequestPrivate(const ListProvisionedProductPlansRequestPrivate &other,
                                   ListProvisionedProductPlansRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListProvisionedProductPlansRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
