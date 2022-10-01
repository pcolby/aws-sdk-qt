// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKUPPLANRESPONSE_P_H
#define QTAWS_DELETEBACKUPPLANRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class DeleteBackupPlanResponse;

class DeleteBackupPlanResponsePrivate : public BackupResponsePrivate {

public:

    explicit DeleteBackupPlanResponsePrivate(DeleteBackupPlanResponse * const q);

    void parseDeleteBackupPlanResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBackupPlanResponse)
    Q_DISABLE_COPY(DeleteBackupPlanResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
