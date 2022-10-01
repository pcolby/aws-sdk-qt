// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHPRODUCTSASADMINREQUEST_H
#define QTAWS_SEARCHPRODUCTSASADMINREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class SearchProductsAsAdminRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT SearchProductsAsAdminRequest : public ServiceCatalogRequest {

public:
    SearchProductsAsAdminRequest(const SearchProductsAsAdminRequest &other);
    SearchProductsAsAdminRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchProductsAsAdminRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
