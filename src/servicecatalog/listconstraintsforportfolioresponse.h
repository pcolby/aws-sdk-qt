// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONSTRAINTSFORPORTFOLIORESPONSE_H
#define QTAWS_LISTCONSTRAINTSFORPORTFOLIORESPONSE_H

#include "servicecatalogresponse.h"
#include "listconstraintsforportfoliorequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListConstraintsForPortfolioResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT ListConstraintsForPortfolioResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    ListConstraintsForPortfolioResponse(const ListConstraintsForPortfolioRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListConstraintsForPortfolioRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListConstraintsForPortfolioResponse)
    Q_DISABLE_COPY(ListConstraintsForPortfolioResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
