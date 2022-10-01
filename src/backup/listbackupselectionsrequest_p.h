// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBACKUPSELECTIONSREQUEST_P_H
#define QTAWS_LISTBACKUPSELECTIONSREQUEST_P_H

#include "backuprequest_p.h"
#include "listbackupselectionsrequest.h"

namespace QtAws {
namespace Backup {

class ListBackupSelectionsRequest;

class ListBackupSelectionsRequestPrivate : public BackupRequestPrivate {

public:
    ListBackupSelectionsRequestPrivate(const BackupRequest::Action action,
                                   ListBackupSelectionsRequest * const q);
    ListBackupSelectionsRequestPrivate(const ListBackupSelectionsRequestPrivate &other,
                                   ListBackupSelectionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBackupSelectionsRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
