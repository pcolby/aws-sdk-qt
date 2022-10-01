// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKUPPLANRESPONSE_H
#define QTAWS_GETBACKUPPLANRESPONSE_H

#include "backupresponse.h"
#include "getbackupplanrequest.h"

namespace QtAws {
namespace Backup {

class GetBackupPlanResponsePrivate;

class QTAWSBACKUP_EXPORT GetBackupPlanResponse : public BackupResponse {
    Q_OBJECT

public:
    GetBackupPlanResponse(const GetBackupPlanRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBackupPlanRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBackupPlanResponse)
    Q_DISABLE_COPY(GetBackupPlanResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
