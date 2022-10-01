// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPORTFOLIORESPONSE_H
#define QTAWS_CREATEPORTFOLIORESPONSE_H

#include "servicecatalogresponse.h"
#include "createportfoliorequest.h"

namespace QtAws {
namespace ServiceCatalog {

class CreatePortfolioResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT CreatePortfolioResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    CreatePortfolioResponse(const CreatePortfolioRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePortfolioRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePortfolioResponse)
    Q_DISABLE_COPY(CreatePortfolioResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
