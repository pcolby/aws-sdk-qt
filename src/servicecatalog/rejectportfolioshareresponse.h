// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTPORTFOLIOSHARERESPONSE_H
#define QTAWS_REJECTPORTFOLIOSHARERESPONSE_H

#include "servicecatalogresponse.h"
#include "rejectportfoliosharerequest.h"

namespace QtAws {
namespace ServiceCatalog {

class RejectPortfolioShareResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT RejectPortfolioShareResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    RejectPortfolioShareResponse(const RejectPortfolioShareRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RejectPortfolioShareRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RejectPortfolioShareResponse)
    Q_DISABLE_COPY(RejectPortfolioShareResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
