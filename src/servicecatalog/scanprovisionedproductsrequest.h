// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SCANPROVISIONEDPRODUCTSREQUEST_H
#define QTAWS_SCANPROVISIONEDPRODUCTSREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ScanProvisionedProductsRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT ScanProvisionedProductsRequest : public ServiceCatalogRequest {

public:
    ScanProvisionedProductsRequest(const ScanProvisionedProductsRequest &other);
    ScanProvisionedProductsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ScanProvisionedProductsRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
