// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASOURCESYNCJOBSREQUEST_P_H
#define QTAWS_LISTDATASOURCESYNCJOBSREQUEST_P_H

#include "kendrarequest_p.h"
#include "listdatasourcesyncjobsrequest.h"

namespace QtAws {
namespace Kendra {

class ListDataSourceSyncJobsRequest;

class ListDataSourceSyncJobsRequestPrivate : public KendraRequestPrivate {

public:
    ListDataSourceSyncJobsRequestPrivate(const KendraRequest::Action action,
                                   ListDataSourceSyncJobsRequest * const q);
    ListDataSourceSyncJobsRequestPrivate(const ListDataSourceSyncJobsRequestPrivate &other,
                                   ListDataSourceSyncJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDataSourceSyncJobsRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
