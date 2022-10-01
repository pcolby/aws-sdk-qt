// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASOURCESRESPONSE_H
#define QTAWS_LISTDATASOURCESRESPONSE_H

#include "kendraresponse.h"
#include "listdatasourcesrequest.h"

namespace QtAws {
namespace Kendra {

class ListDataSourcesResponsePrivate;

class QTAWSKENDRA_EXPORT ListDataSourcesResponse : public KendraResponse {
    Q_OBJECT

public:
    ListDataSourcesResponse(const ListDataSourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDataSourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDataSourcesResponse)
    Q_DISABLE_COPY(ListDataSourcesResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
