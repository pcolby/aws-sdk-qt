// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTASPROVISIONEDPRODUCTREQUEST_P_H
#define QTAWS_IMPORTASPROVISIONEDPRODUCTREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "importasprovisionedproductrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ImportAsProvisionedProductRequest;

class ImportAsProvisionedProductRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    ImportAsProvisionedProductRequestPrivate(const ServiceCatalogRequest::Action action,
                                   ImportAsProvisionedProductRequest * const q);
    ImportAsProvisionedProductRequestPrivate(const ImportAsProvisionedProductRequestPrivate &other,
                                   ImportAsProvisionedProductRequest * const q);

private:
    Q_DECLARE_PUBLIC(ImportAsProvisionedProductRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
