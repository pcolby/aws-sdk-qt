// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTBACKUPPLANTEMPLATEREQUEST_P_H
#define QTAWS_EXPORTBACKUPPLANTEMPLATEREQUEST_P_H

#include "backuprequest_p.h"
#include "exportbackupplantemplaterequest.h"

namespace QtAws {
namespace Backup {

class ExportBackupPlanTemplateRequest;

class ExportBackupPlanTemplateRequestPrivate : public BackupRequestPrivate {

public:
    ExportBackupPlanTemplateRequestPrivate(const BackupRequest::Action action,
                                   ExportBackupPlanTemplateRequest * const q);
    ExportBackupPlanTemplateRequestPrivate(const ExportBackupPlanTemplateRequestPrivate &other,
                                   ExportBackupPlanTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(ExportBackupPlanTemplateRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
