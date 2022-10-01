// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBACKUPVAULTSREQUEST_P_H
#define QTAWS_LISTBACKUPVAULTSREQUEST_P_H

#include "backuprequest_p.h"
#include "listbackupvaultsrequest.h"

namespace QtAws {
namespace Backup {

class ListBackupVaultsRequest;

class ListBackupVaultsRequestPrivate : public BackupRequestPrivate {

public:
    ListBackupVaultsRequestPrivate(const BackupRequest::Action action,
                                   ListBackupVaultsRequest * const q);
    ListBackupVaultsRequestPrivate(const ListBackupVaultsRequestPrivate &other,
                                   ListBackupVaultsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBackupVaultsRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
