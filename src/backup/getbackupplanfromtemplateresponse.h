// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKUPPLANFROMTEMPLATERESPONSE_H
#define QTAWS_GETBACKUPPLANFROMTEMPLATERESPONSE_H

#include "backupresponse.h"
#include "getbackupplanfromtemplaterequest.h"

namespace QtAws {
namespace Backup {

class GetBackupPlanFromTemplateResponsePrivate;

class QTAWSBACKUP_EXPORT GetBackupPlanFromTemplateResponse : public BackupResponse {
    Q_OBJECT

public:
    GetBackupPlanFromTemplateResponse(const GetBackupPlanFromTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBackupPlanFromTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBackupPlanFromTemplateResponse)
    Q_DISABLE_COPY(GetBackupPlanFromTemplateResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
