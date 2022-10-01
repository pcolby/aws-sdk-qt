// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBACKUPPLANVERSIONSRESPONSE_H
#define QTAWS_LISTBACKUPPLANVERSIONSRESPONSE_H

#include "backupresponse.h"
#include "listbackupplanversionsrequest.h"

namespace QtAws {
namespace Backup {

class ListBackupPlanVersionsResponsePrivate;

class QTAWSBACKUP_EXPORT ListBackupPlanVersionsResponse : public BackupResponse {
    Q_OBJECT

public:
    ListBackupPlanVersionsResponse(const ListBackupPlanVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListBackupPlanVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBackupPlanVersionsResponse)
    Q_DISABLE_COPY(ListBackupPlanVersionsResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
