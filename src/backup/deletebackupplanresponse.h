// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKUPPLANRESPONSE_H
#define QTAWS_DELETEBACKUPPLANRESPONSE_H

#include "backupresponse.h"
#include "deletebackupplanrequest.h"

namespace QtAws {
namespace Backup {

class DeleteBackupPlanResponsePrivate;

class QTAWSBACKUP_EXPORT DeleteBackupPlanResponse : public BackupResponse {
    Q_OBJECT

public:
    DeleteBackupPlanResponse(const DeleteBackupPlanRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBackupPlanRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBackupPlanResponse)
    Q_DISABLE_COPY(DeleteBackupPlanResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
