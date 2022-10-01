// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHPRODUCTSREQUEST_H
#define QTAWS_SEARCHPRODUCTSREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class SearchProductsRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT SearchProductsRequest : public ServiceCatalogRequest {

public:
    SearchProductsRequest(const SearchProductsRequest &other);
    SearchProductsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchProductsRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
