// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTREPORTJOBRESPONSE_P_H
#define QTAWS_STARTREPORTJOBRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class StartReportJobResponse;

class StartReportJobResponsePrivate : public BackupResponsePrivate {

public:

    explicit StartReportJobResponsePrivate(StartReportJobResponse * const q);

    void parseStartReportJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartReportJobResponse)
    Q_DISABLE_COPY(StartReportJobResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
