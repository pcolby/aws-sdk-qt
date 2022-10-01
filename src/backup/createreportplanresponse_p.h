// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPORTPLANRESPONSE_P_H
#define QTAWS_CREATEREPORTPLANRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class CreateReportPlanResponse;

class CreateReportPlanResponsePrivate : public BackupResponsePrivate {

public:

    explicit CreateReportPlanResponsePrivate(CreateReportPlanResponse * const q);

    void parseCreateReportPlanResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateReportPlanResponse)
    Q_DISABLE_COPY(CreateReportPlanResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
