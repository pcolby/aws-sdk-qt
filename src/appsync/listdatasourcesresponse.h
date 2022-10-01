// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASOURCESRESPONSE_H
#define QTAWS_LISTDATASOURCESRESPONSE_H

#include "appsyncresponse.h"
#include "listdatasourcesrequest.h"

namespace QtAws {
namespace AppSync {

class ListDataSourcesResponsePrivate;

class QTAWSAPPSYNC_EXPORT ListDataSourcesResponse : public AppSyncResponse {
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

} // namespace AppSync
} // namespace QtAws

#endif
