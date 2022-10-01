// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBACKUPPLANTEMPLATESRESPONSE_P_H
#define QTAWS_LISTBACKUPPLANTEMPLATESRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class ListBackupPlanTemplatesResponse;

class ListBackupPlanTemplatesResponsePrivate : public BackupResponsePrivate {

public:

    explicit ListBackupPlanTemplatesResponsePrivate(ListBackupPlanTemplatesResponse * const q);

    void parseListBackupPlanTemplatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListBackupPlanTemplatesResponse)
    Q_DISABLE_COPY(ListBackupPlanTemplatesResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
