// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROVISIONPRODUCTREQUEST_P_H
#define QTAWS_PROVISIONPRODUCTREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "provisionproductrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ProvisionProductRequest;

class ProvisionProductRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    ProvisionProductRequestPrivate(const ServiceCatalogRequest::Action action,
                                   ProvisionProductRequest * const q);
    ProvisionProductRequestPrivate(const ProvisionProductRequestPrivate &other,
                                   ProvisionProductRequest * const q);

private:
    Q_DECLARE_PUBLIC(ProvisionProductRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
