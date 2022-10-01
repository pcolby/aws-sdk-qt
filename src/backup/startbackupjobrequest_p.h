// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTBACKUPJOBREQUEST_P_H
#define QTAWS_STARTBACKUPJOBREQUEST_P_H

#include "backuprequest_p.h"
#include "startbackupjobrequest.h"

namespace QtAws {
namespace Backup {

class StartBackupJobRequest;

class StartBackupJobRequestPrivate : public BackupRequestPrivate {

public:
    StartBackupJobRequestPrivate(const BackupRequest::Action action,
                                   StartBackupJobRequest * const q);
    StartBackupJobRequestPrivate(const StartBackupJobRequestPrivate &other,
                                   StartBackupJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartBackupJobRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
