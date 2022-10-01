// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPORTFOLIOSRESPONSE_H
#define QTAWS_LISTPORTFOLIOSRESPONSE_H

#include "servicecatalogresponse.h"
#include "listportfoliosrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListPortfoliosResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT ListPortfoliosResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    ListPortfoliosResponse(const ListPortfoliosRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPortfoliosRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPortfoliosResponse)
    Q_DISABLE_COPY(ListPortfoliosResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
