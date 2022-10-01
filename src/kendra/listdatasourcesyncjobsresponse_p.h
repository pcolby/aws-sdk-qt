// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASOURCESYNCJOBSRESPONSE_P_H
#define QTAWS_LISTDATASOURCESYNCJOBSRESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class ListDataSourceSyncJobsResponse;

class ListDataSourceSyncJobsResponsePrivate : public KendraResponsePrivate {

public:

    explicit ListDataSourceSyncJobsResponsePrivate(ListDataSourceSyncJobsResponse * const q);

    void parseListDataSourceSyncJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDataSourceSyncJobsResponse)
    Q_DISABLE_COPY(ListDataSourceSyncJobsResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
