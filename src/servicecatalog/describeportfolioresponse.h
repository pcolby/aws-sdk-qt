// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPORTFOLIORESPONSE_H
#define QTAWS_DESCRIBEPORTFOLIORESPONSE_H

#include "servicecatalogresponse.h"
#include "describeportfoliorequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribePortfolioResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT DescribePortfolioResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    DescribePortfolioResponse(const DescribePortfolioRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePortfolioRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePortfolioResponse)
    Q_DISABLE_COPY(DescribePortfolioResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
