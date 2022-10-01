// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKUPSELECTIONRESPONSE_H
#define QTAWS_DELETEBACKUPSELECTIONRESPONSE_H

#include "backupresponse.h"
#include "deletebackupselectionrequest.h"

namespace QtAws {
namespace Backup {

class DeleteBackupSelectionResponsePrivate;

class QTAWSBACKUP_EXPORT DeleteBackupSelectionResponse : public BackupResponse {
    Q_OBJECT

public:
    DeleteBackupSelectionResponse(const DeleteBackupSelectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBackupSelectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBackupSelectionResponse)
    Q_DISABLE_COPY(DeleteBackupSelectionResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
