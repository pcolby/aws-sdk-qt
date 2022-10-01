// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTBACKUPPLANTEMPLATERESPONSE_P_H
#define QTAWS_EXPORTBACKUPPLANTEMPLATERESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class ExportBackupPlanTemplateResponse;

class ExportBackupPlanTemplateResponsePrivate : public BackupResponsePrivate {

public:

    explicit ExportBackupPlanTemplateResponsePrivate(ExportBackupPlanTemplateResponse * const q);

    void parseExportBackupPlanTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ExportBackupPlanTemplateResponse)
    Q_DISABLE_COPY(ExportBackupPlanTemplateResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
