// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKUPSELECTIONREQUEST_P_H
#define QTAWS_DELETEBACKUPSELECTIONREQUEST_P_H

#include "backuprequest_p.h"
#include "deletebackupselectionrequest.h"

namespace QtAws {
namespace Backup {

class DeleteBackupSelectionRequest;

class DeleteBackupSelectionRequestPrivate : public BackupRequestPrivate {

public:
    DeleteBackupSelectionRequestPrivate(const BackupRequest::Action action,
                                   DeleteBackupSelectionRequest * const q);
    DeleteBackupSelectionRequestPrivate(const DeleteBackupSelectionRequestPrivate &other,
                                   DeleteBackupSelectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBackupSelectionRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
