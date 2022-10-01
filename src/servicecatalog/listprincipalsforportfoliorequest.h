// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPRINCIPALSFORPORTFOLIOREQUEST_H
#define QTAWS_LISTPRINCIPALSFORPORTFOLIOREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListPrincipalsForPortfolioRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT ListPrincipalsForPortfolioRequest : public ServiceCatalogRequest {

public:
    ListPrincipalsForPortfolioRequest(const ListPrincipalsForPortfolioRequest &other);
    ListPrincipalsForPortfolioRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPrincipalsForPortfolioRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
