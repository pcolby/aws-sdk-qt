// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPORTJOBSRESPONSE_P_H
#define QTAWS_LISTREPORTJOBSRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class ListReportJobsResponse;

class ListReportJobsResponsePrivate : public BackupResponsePrivate {

public:

    explicit ListReportJobsResponsePrivate(ListReportJobsResponse * const q);

    void parseListReportJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListReportJobsResponse)
    Q_DISABLE_COPY(ListReportJobsResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
