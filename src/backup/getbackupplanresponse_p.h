// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKUPPLANRESPONSE_P_H
#define QTAWS_GETBACKUPPLANRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class GetBackupPlanResponse;

class GetBackupPlanResponsePrivate : public BackupResponsePrivate {

public:

    explicit GetBackupPlanResponsePrivate(GetBackupPlanResponse * const q);

    void parseGetBackupPlanResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBackupPlanResponse)
    Q_DISABLE_COPY(GetBackupPlanResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
