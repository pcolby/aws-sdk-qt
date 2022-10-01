// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEPRODUCTWITHPORTFOLIOREQUEST_H
#define QTAWS_ASSOCIATEPRODUCTWITHPORTFOLIOREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class AssociateProductWithPortfolioRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT AssociateProductWithPortfolioRequest : public ServiceCatalogRequest {

public:
    AssociateProductWithPortfolioRequest(const AssociateProductWithPortfolioRequest &other);
    AssociateProductWithPortfolioRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateProductWithPortfolioRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
