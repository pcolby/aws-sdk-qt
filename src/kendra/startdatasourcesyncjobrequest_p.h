// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDATASOURCESYNCJOBREQUEST_P_H
#define QTAWS_STARTDATASOURCESYNCJOBREQUEST_P_H

#include "kendrarequest_p.h"
#include "startdatasourcesyncjobrequest.h"

namespace QtAws {
namespace Kendra {

class StartDataSourceSyncJobRequest;

class StartDataSourceSyncJobRequestPrivate : public KendraRequestPrivate {

public:
    StartDataSourceSyncJobRequestPrivate(const KendraRequest::Action action,
                                   StartDataSourceSyncJobRequest * const q);
    StartDataSourceSyncJobRequestPrivate(const StartDataSourceSyncJobRequestPrivate &other,
                                   StartDataSourceSyncJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartDataSourceSyncJobRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
