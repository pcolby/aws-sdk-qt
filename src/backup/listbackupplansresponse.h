// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBACKUPPLANSRESPONSE_H
#define QTAWS_LISTBACKUPPLANSRESPONSE_H

#include "backupresponse.h"
#include "listbackupplansrequest.h"

namespace QtAws {
namespace Backup {

class ListBackupPlansResponsePrivate;

class QTAWSBACKUP_EXPORT ListBackupPlansResponse : public BackupResponse {
    Q_OBJECT

public:
    ListBackupPlansResponse(const ListBackupPlansRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListBackupPlansRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBackupPlansResponse)
    Q_DISABLE_COPY(ListBackupPlansResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
