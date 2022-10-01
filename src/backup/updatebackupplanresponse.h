// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBACKUPPLANRESPONSE_H
#define QTAWS_UPDATEBACKUPPLANRESPONSE_H

#include "backupresponse.h"
#include "updatebackupplanrequest.h"

namespace QtAws {
namespace Backup {

class UpdateBackupPlanResponsePrivate;

class QTAWSBACKUP_EXPORT UpdateBackupPlanResponse : public BackupResponse {
    Q_OBJECT

public:
    UpdateBackupPlanResponse(const UpdateBackupPlanRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateBackupPlanRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBackupPlanResponse)
    Q_DISABLE_COPY(UpdateBackupPlanResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
