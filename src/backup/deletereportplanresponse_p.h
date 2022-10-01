// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPORTPLANRESPONSE_P_H
#define QTAWS_DELETEREPORTPLANRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class DeleteReportPlanResponse;

class DeleteReportPlanResponsePrivate : public BackupResponsePrivate {

public:

    explicit DeleteReportPlanResponsePrivate(DeleteReportPlanResponse * const q);

    void parseDeleteReportPlanResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteReportPlanResponse)
    Q_DISABLE_COPY(DeleteReportPlanResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
