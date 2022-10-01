// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBACKUPPLANSREQUEST_P_H
#define QTAWS_LISTBACKUPPLANSREQUEST_P_H

#include "backuprequest_p.h"
#include "listbackupplansrequest.h"

namespace QtAws {
namespace Backup {

class ListBackupPlansRequest;

class ListBackupPlansRequestPrivate : public BackupRequestPrivate {

public:
    ListBackupPlansRequestPrivate(const BackupRequest::Action action,
                                   ListBackupPlansRequest * const q);
    ListBackupPlansRequestPrivate(const ListBackupPlansRequestPrivate &other,
                                   ListBackupPlansRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBackupPlansRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
