// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBACKUPSELECTIONREQUEST_P_H
#define QTAWS_CREATEBACKUPSELECTIONREQUEST_P_H

#include "backuprequest_p.h"
#include "createbackupselectionrequest.h"

namespace QtAws {
namespace Backup {

class CreateBackupSelectionRequest;

class CreateBackupSelectionRequestPrivate : public BackupRequestPrivate {

public:
    CreateBackupSelectionRequestPrivate(const BackupRequest::Action action,
                                   CreateBackupSelectionRequest * const q);
    CreateBackupSelectionRequestPrivate(const CreateBackupSelectionRequestPrivate &other,
                                   CreateBackupSelectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateBackupSelectionRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
