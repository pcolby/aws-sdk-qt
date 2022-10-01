// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREPORTPLANRESPONSE_P_H
#define QTAWS_UPDATEREPORTPLANRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class UpdateReportPlanResponse;

class UpdateReportPlanResponsePrivate : public BackupResponsePrivate {

public:

    explicit UpdateReportPlanResponsePrivate(UpdateReportPlanResponse * const q);

    void parseUpdateReportPlanResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateReportPlanResponse)
    Q_DISABLE_COPY(UpdateReportPlanResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
