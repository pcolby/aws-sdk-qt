// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGOPTIONSRESPONSE_H
#define QTAWS_LISTTAGOPTIONSRESPONSE_H

#include "servicecatalogresponse.h"
#include "listtagoptionsrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListTagOptionsResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT ListTagOptionsResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    ListTagOptionsResponse(const ListTagOptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTagOptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTagOptionsResponse)
    Q_DISABLE_COPY(ListTagOptionsResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
