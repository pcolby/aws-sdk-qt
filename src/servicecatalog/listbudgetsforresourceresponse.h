// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUDGETSFORRESOURCERESPONSE_H
#define QTAWS_LISTBUDGETSFORRESOURCERESPONSE_H

#include "servicecatalogresponse.h"
#include "listbudgetsforresourcerequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListBudgetsForResourceResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT ListBudgetsForResourceResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    ListBudgetsForResourceResponse(const ListBudgetsForResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListBudgetsForResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBudgetsForResourceResponse)
    Q_DISABLE_COPY(ListBudgetsForResourceResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
