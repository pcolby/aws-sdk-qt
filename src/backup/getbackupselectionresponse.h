// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKUPSELECTIONRESPONSE_H
#define QTAWS_GETBACKUPSELECTIONRESPONSE_H

#include "backupresponse.h"
#include "getbackupselectionrequest.h"

namespace QtAws {
namespace Backup {

class GetBackupSelectionResponsePrivate;

class QTAWSBACKUP_EXPORT GetBackupSelectionResponse : public BackupResponse {
    Q_OBJECT

public:
    GetBackupSelectionResponse(const GetBackupSelectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBackupSelectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBackupSelectionResponse)
    Q_DISABLE_COPY(GetBackupSelectionResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
