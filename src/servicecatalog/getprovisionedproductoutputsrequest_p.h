// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROVISIONEDPRODUCTOUTPUTSREQUEST_P_H
#define QTAWS_GETPROVISIONEDPRODUCTOUTPUTSREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "getprovisionedproductoutputsrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class GetProvisionedProductOutputsRequest;

class GetProvisionedProductOutputsRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    GetProvisionedProductOutputsRequestPrivate(const ServiceCatalogRequest::Action action,
                                   GetProvisionedProductOutputsRequest * const q);
    GetProvisionedProductOutputsRequestPrivate(const GetProvisionedProductOutputsRequestPrivate &other,
                                   GetProvisionedProductOutputsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetProvisionedProductOutputsRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
