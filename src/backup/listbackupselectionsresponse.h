// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBACKUPSELECTIONSRESPONSE_H
#define QTAWS_LISTBACKUPSELECTIONSRESPONSE_H

#include "backupresponse.h"
#include "listbackupselectionsrequest.h"

namespace QtAws {
namespace Backup {

class ListBackupSelectionsResponsePrivate;

class QTAWSBACKUP_EXPORT ListBackupSelectionsResponse : public BackupResponse {
    Q_OBJECT

public:
    ListBackupSelectionsResponse(const ListBackupSelectionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListBackupSelectionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBackupSelectionsResponse)
    Q_DISABLE_COPY(ListBackupSelectionsResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
