// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPDATASOURCESYNCJOBREQUEST_P_H
#define QTAWS_STOPDATASOURCESYNCJOBREQUEST_P_H

#include "kendrarequest_p.h"
#include "stopdatasourcesyncjobrequest.h"

namespace QtAws {
namespace Kendra {

class StopDataSourceSyncJobRequest;

class StopDataSourceSyncJobRequestPrivate : public KendraRequestPrivate {

public:
    StopDataSourceSyncJobRequestPrivate(const KendraRequest::Action action,
                                   StopDataSourceSyncJobRequest * const q);
    StopDataSourceSyncJobRequestPrivate(const StopDataSourceSyncJobRequestPrivate &other,
                                   StopDataSourceSyncJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopDataSourceSyncJobRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
