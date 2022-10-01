// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBACKUPVAULTSRESPONSE_H
#define QTAWS_LISTBACKUPVAULTSRESPONSE_H

#include "backupresponse.h"
#include "listbackupvaultsrequest.h"

namespace QtAws {
namespace Backup {

class ListBackupVaultsResponsePrivate;

class QTAWSBACKUP_EXPORT ListBackupVaultsResponse : public BackupResponse {
    Q_OBJECT

public:
    ListBackupVaultsResponse(const ListBackupVaultsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListBackupVaultsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBackupVaultsResponse)
    Q_DISABLE_COPY(ListBackupVaultsResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
