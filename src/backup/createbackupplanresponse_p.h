// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBACKUPPLANRESPONSE_P_H
#define QTAWS_CREATEBACKUPPLANRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class CreateBackupPlanResponse;

class CreateBackupPlanResponsePrivate : public BackupResponsePrivate {

public:

    explicit CreateBackupPlanResponsePrivate(CreateBackupPlanResponse * const q);

    void parseCreateBackupPlanResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateBackupPlanResponse)
    Q_DISABLE_COPY(CreateBackupPlanResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
