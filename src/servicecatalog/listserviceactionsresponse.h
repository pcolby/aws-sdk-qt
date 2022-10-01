// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICEACTIONSRESPONSE_H
#define QTAWS_LISTSERVICEACTIONSRESPONSE_H

#include "servicecatalogresponse.h"
#include "listserviceactionsrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListServiceActionsResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT ListServiceActionsResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    ListServiceActionsResponse(const ListServiceActionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListServiceActionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListServiceActionsResponse)
    Q_DISABLE_COPY(ListServiceActionsResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
