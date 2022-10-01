// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKUPPLANFROMJSONREQUEST_P_H
#define QTAWS_GETBACKUPPLANFROMJSONREQUEST_P_H

#include "backuprequest_p.h"
#include "getbackupplanfromjsonrequest.h"

namespace QtAws {
namespace Backup {

class GetBackupPlanFromJSONRequest;

class GetBackupPlanFromJSONRequestPrivate : public BackupRequestPrivate {

public:
    GetBackupPlanFromJSONRequestPrivate(const BackupRequest::Action action,
                                   GetBackupPlanFromJSONRequest * const q);
    GetBackupPlanFromJSONRequestPrivate(const GetBackupPlanFromJSONRequestPrivate &other,
                                   GetBackupPlanFromJSONRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBackupPlanFromJSONRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
