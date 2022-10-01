// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPORTFOLIOSHARESREQUEST_H
#define QTAWS_DESCRIBEPORTFOLIOSHARESREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribePortfolioSharesRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT DescribePortfolioSharesRequest : public ServiceCatalogRequest {

public:
    DescribePortfolioSharesRequest(const DescribePortfolioSharesRequest &other);
    DescribePortfolioSharesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePortfolioSharesRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
