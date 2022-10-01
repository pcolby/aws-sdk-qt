// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPDATASOURCESYNCJOBRESPONSE_P_H
#define QTAWS_STOPDATASOURCESYNCJOBRESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class StopDataSourceSyncJobResponse;

class StopDataSourceSyncJobResponsePrivate : public KendraResponsePrivate {

public:

    explicit StopDataSourceSyncJobResponsePrivate(StopDataSourceSyncJobResponse * const q);

    void parseStopDataSourceSyncJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopDataSourceSyncJobResponse)
    Q_DISABLE_COPY(StopDataSourceSyncJobResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
