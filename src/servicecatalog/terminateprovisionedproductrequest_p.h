// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATEPROVISIONEDPRODUCTREQUEST_P_H
#define QTAWS_TERMINATEPROVISIONEDPRODUCTREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "terminateprovisionedproductrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class TerminateProvisionedProductRequest;

class TerminateProvisionedProductRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    TerminateProvisionedProductRequestPrivate(const ServiceCatalogRequest::Action action,
                                   TerminateProvisionedProductRequest * const q);
    TerminateProvisionedProductRequestPrivate(const TerminateProvisionedProductRequestPrivate &other,
                                   TerminateProvisionedProductRequest * const q);

private:
    Q_DECLARE_PUBLIC(TerminateProvisionedProductRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
