// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORGANIZATIONPORTFOLIOACCESSRESPONSE_H
#define QTAWS_LISTORGANIZATIONPORTFOLIOACCESSRESPONSE_H

#include "servicecatalogresponse.h"
#include "listorganizationportfolioaccessrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListOrganizationPortfolioAccessResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT ListOrganizationPortfolioAccessResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    ListOrganizationPortfolioAccessResponse(const ListOrganizationPortfolioAccessRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListOrganizationPortfolioAccessRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOrganizationPortfolioAccessResponse)
    Q_DISABLE_COPY(ListOrganizationPortfolioAccessResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
