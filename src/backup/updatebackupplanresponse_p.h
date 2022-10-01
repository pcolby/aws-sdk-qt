// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBACKUPPLANRESPONSE_P_H
#define QTAWS_UPDATEBACKUPPLANRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class UpdateBackupPlanResponse;

class UpdateBackupPlanResponsePrivate : public BackupResponsePrivate {

public:

    explicit UpdateBackupPlanResponsePrivate(UpdateBackupPlanResponse * const q);

    void parseUpdateBackupPlanResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateBackupPlanResponse)
    Q_DISABLE_COPY(UpdateBackupPlanResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
