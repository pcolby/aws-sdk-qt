// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPORTFOLIOSHARESRESPONSE_H
#define QTAWS_DESCRIBEPORTFOLIOSHARESRESPONSE_H

#include "servicecatalogresponse.h"
#include "describeportfoliosharesrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribePortfolioSharesResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT DescribePortfolioSharesResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    DescribePortfolioSharesResponse(const DescribePortfolioSharesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePortfolioSharesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePortfolioSharesResponse)
    Q_DISABLE_COPY(DescribePortfolioSharesResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
