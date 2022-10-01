// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKUPSELECTIONREQUEST_P_H
#define QTAWS_GETBACKUPSELECTIONREQUEST_P_H

#include "backuprequest_p.h"
#include "getbackupselectionrequest.h"

namespace QtAws {
namespace Backup {

class GetBackupSelectionRequest;

class GetBackupSelectionRequestPrivate : public BackupRequestPrivate {

public:
    GetBackupSelectionRequestPrivate(const BackupRequest::Action action,
                                   GetBackupSelectionRequest * const q);
    GetBackupSelectionRequestPrivate(const GetBackupSelectionRequestPrivate &other,
                                   GetBackupSelectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBackupSelectionRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
