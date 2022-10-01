// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASOURCESYNCJOBSRESPONSE_H
#define QTAWS_LISTDATASOURCESYNCJOBSRESPONSE_H

#include "kendraresponse.h"
#include "listdatasourcesyncjobsrequest.h"

namespace QtAws {
namespace Kendra {

class ListDataSourceSyncJobsResponsePrivate;

class QTAWSKENDRA_EXPORT ListDataSourceSyncJobsResponse : public KendraResponse {
    Q_OBJECT

public:
    ListDataSourceSyncJobsResponse(const ListDataSourceSyncJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDataSourceSyncJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDataSourceSyncJobsResponse)
    Q_DISABLE_COPY(ListDataSourceSyncJobsResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
