// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBACKUPPLANTEMPLATESREQUEST_P_H
#define QTAWS_LISTBACKUPPLANTEMPLATESREQUEST_P_H

#include "backuprequest_p.h"
#include "listbackupplantemplatesrequest.h"

namespace QtAws {
namespace Backup {

class ListBackupPlanTemplatesRequest;

class ListBackupPlanTemplatesRequestPrivate : public BackupRequestPrivate {

public:
    ListBackupPlanTemplatesRequestPrivate(const BackupRequest::Action action,
                                   ListBackupPlanTemplatesRequest * const q);
    ListBackupPlanTemplatesRequestPrivate(const ListBackupPlanTemplatesRequestPrivate &other,
                                   ListBackupPlanTemplatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBackupPlanTemplatesRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
