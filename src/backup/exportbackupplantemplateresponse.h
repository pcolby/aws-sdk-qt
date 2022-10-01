// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTBACKUPPLANTEMPLATERESPONSE_H
#define QTAWS_EXPORTBACKUPPLANTEMPLATERESPONSE_H

#include "backupresponse.h"
#include "exportbackupplantemplaterequest.h"

namespace QtAws {
namespace Backup {

class ExportBackupPlanTemplateResponsePrivate;

class QTAWSBACKUP_EXPORT ExportBackupPlanTemplateResponse : public BackupResponse {
    Q_OBJECT

public:
    ExportBackupPlanTemplateResponse(const ExportBackupPlanTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ExportBackupPlanTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExportBackupPlanTemplateResponse)
    Q_DISABLE_COPY(ExportBackupPlanTemplateResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
