// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPORTFOLIOACCESSRESPONSE_H
#define QTAWS_LISTPORTFOLIOACCESSRESPONSE_H

#include "servicecatalogresponse.h"
#include "listportfolioaccessrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListPortfolioAccessResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT ListPortfolioAccessResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    ListPortfolioAccessResponse(const ListPortfolioAccessRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPortfolioAccessRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPortfolioAccessResponse)
    Q_DISABLE_COPY(ListPortfolioAccessResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
