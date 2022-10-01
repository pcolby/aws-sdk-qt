// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKUPPLANREQUEST_P_H
#define QTAWS_DELETEBACKUPPLANREQUEST_P_H

#include "backuprequest_p.h"
#include "deletebackupplanrequest.h"

namespace QtAws {
namespace Backup {

class DeleteBackupPlanRequest;

class DeleteBackupPlanRequestPrivate : public BackupRequestPrivate {

public:
    DeleteBackupPlanRequestPrivate(const BackupRequest::Action action,
                                   DeleteBackupPlanRequest * const q);
    DeleteBackupPlanRequestPrivate(const DeleteBackupPlanRequestPrivate &other,
                                   DeleteBackupPlanRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBackupPlanRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
