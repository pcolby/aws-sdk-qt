// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKUPPLANFROMTEMPLATERESPONSE_P_H
#define QTAWS_GETBACKUPPLANFROMTEMPLATERESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class GetBackupPlanFromTemplateResponse;

class GetBackupPlanFromTemplateResponsePrivate : public BackupResponsePrivate {

public:

    explicit GetBackupPlanFromTemplateResponsePrivate(GetBackupPlanFromTemplateResponse * const q);

    void parseGetBackupPlanFromTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBackupPlanFromTemplateResponse)
    Q_DISABLE_COPY(GetBackupPlanFromTemplateResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
