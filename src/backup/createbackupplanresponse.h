// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBACKUPPLANRESPONSE_H
#define QTAWS_CREATEBACKUPPLANRESPONSE_H

#include "backupresponse.h"
#include "createbackupplanrequest.h"

namespace QtAws {
namespace Backup {

class CreateBackupPlanResponsePrivate;

class QTAWSBACKUP_EXPORT CreateBackupPlanResponse : public BackupResponse {
    Q_OBJECT

public:
    CreateBackupPlanResponse(const CreateBackupPlanRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateBackupPlanRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBackupPlanResponse)
    Q_DISABLE_COPY(CreateBackupPlanResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
