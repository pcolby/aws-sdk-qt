// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPORTFOLIORESPONSE_H
#define QTAWS_UPDATEPORTFOLIORESPONSE_H

#include "servicecatalogresponse.h"
#include "updateportfoliorequest.h"

namespace QtAws {
namespace ServiceCatalog {

class UpdatePortfolioResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT UpdatePortfolioResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    UpdatePortfolioResponse(const UpdatePortfolioRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdatePortfolioRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePortfolioResponse)
    Q_DISABLE_COPY(UpdatePortfolioResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
