// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPORTFOLIOSHARESTATUSRESPONSE_H
#define QTAWS_DESCRIBEPORTFOLIOSHARESTATUSRESPONSE_H

#include "servicecatalogresponse.h"
#include "describeportfoliosharestatusrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribePortfolioShareStatusResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT DescribePortfolioShareStatusResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    DescribePortfolioShareStatusResponse(const DescribePortfolioShareStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePortfolioShareStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePortfolioShareStatusResponse)
    Q_DISABLE_COPY(DescribePortfolioShareStatusResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
