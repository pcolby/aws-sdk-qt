// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBACKUPPLANVERSIONSREQUEST_P_H
#define QTAWS_LISTBACKUPPLANVERSIONSREQUEST_P_H

#include "backuprequest_p.h"
#include "listbackupplanversionsrequest.h"

namespace QtAws {
namespace Backup {

class ListBackupPlanVersionsRequest;

class ListBackupPlanVersionsRequestPrivate : public BackupRequestPrivate {

public:
    ListBackupPlanVersionsRequestPrivate(const BackupRequest::Action action,
                                   ListBackupPlanVersionsRequest * const q);
    ListBackupPlanVersionsRequestPrivate(const ListBackupPlanVersionsRequestPrivate &other,
                                   ListBackupPlanVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBackupPlanVersionsRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
