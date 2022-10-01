// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKUPPLANFROMTEMPLATEREQUEST_P_H
#define QTAWS_GETBACKUPPLANFROMTEMPLATEREQUEST_P_H

#include "backuprequest_p.h"
#include "getbackupplanfromtemplaterequest.h"

namespace QtAws {
namespace Backup {

class GetBackupPlanFromTemplateRequest;

class GetBackupPlanFromTemplateRequestPrivate : public BackupRequestPrivate {

public:
    GetBackupPlanFromTemplateRequestPrivate(const BackupRequest::Action action,
                                   GetBackupPlanFromTemplateRequest * const q);
    GetBackupPlanFromTemplateRequestPrivate(const GetBackupPlanFromTemplateRequestPrivate &other,
                                   GetBackupPlanFromTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBackupPlanFromTemplateRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
