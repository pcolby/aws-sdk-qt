// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHPROVISIONEDPRODUCTSREQUEST_H
#define QTAWS_SEARCHPROVISIONEDPRODUCTSREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class SearchProvisionedProductsRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT SearchProvisionedProductsRequest : public ServiceCatalogRequest {

public:
    SearchProvisionedProductsRequest(const SearchProvisionedProductsRequest &other);
    SearchProvisionedProductsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchProvisionedProductsRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
