// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKUPPLANFROMJSONRESPONSE_P_H
#define QTAWS_GETBACKUPPLANFROMJSONRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class GetBackupPlanFromJSONResponse;

class GetBackupPlanFromJSONResponsePrivate : public BackupResponsePrivate {

public:

    explicit GetBackupPlanFromJSONResponsePrivate(GetBackupPlanFromJSONResponse * const q);

    void parseGetBackupPlanFromJSONResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBackupPlanFromJSONResponse)
    Q_DISABLE_COPY(GetBackupPlanFromJSONResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
