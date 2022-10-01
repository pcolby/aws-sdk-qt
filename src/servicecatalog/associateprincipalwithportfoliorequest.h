// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEPRINCIPALWITHPORTFOLIOREQUEST_H
#define QTAWS_ASSOCIATEPRINCIPALWITHPORTFOLIOREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class AssociatePrincipalWithPortfolioRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT AssociatePrincipalWithPortfolioRequest : public ServiceCatalogRequest {

public:
    AssociatePrincipalWithPortfolioRequest(const AssociatePrincipalWithPortfolioRequest &other);
    AssociatePrincipalWithPortfolioRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociatePrincipalWithPortfolioRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
