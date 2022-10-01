// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCEPTEDPORTFOLIOSHARESREQUEST_H
#define QTAWS_LISTACCEPTEDPORTFOLIOSHARESREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListAcceptedPortfolioSharesRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT ListAcceptedPortfolioSharesRequest : public ServiceCatalogRequest {

public:
    ListAcceptedPortfolioSharesRequest(const ListAcceptedPortfolioSharesRequest &other);
    ListAcceptedPortfolioSharesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAcceptedPortfolioSharesRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
