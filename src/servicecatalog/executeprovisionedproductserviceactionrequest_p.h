// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXECUTEPROVISIONEDPRODUCTSERVICEACTIONREQUEST_P_H
#define QTAWS_EXECUTEPROVISIONEDPRODUCTSERVICEACTIONREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "executeprovisionedproductserviceactionrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ExecuteProvisionedProductServiceActionRequest;

class ExecuteProvisionedProductServiceActionRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    ExecuteProvisionedProductServiceActionRequestPrivate(const ServiceCatalogRequest::Action action,
                                   ExecuteProvisionedProductServiceActionRequest * const q);
    ExecuteProvisionedProductServiceActionRequestPrivate(const ExecuteProvisionedProductServiceActionRequestPrivate &other,
                                   ExecuteProvisionedProductServiceActionRequest * const q);

private:
    Q_DECLARE_PUBLIC(ExecuteProvisionedProductServiceActionRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
