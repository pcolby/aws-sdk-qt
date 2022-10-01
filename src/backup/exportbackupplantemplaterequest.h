// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTBACKUPPLANTEMPLATEREQUEST_H
#define QTAWS_EXPORTBACKUPPLANTEMPLATEREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class ExportBackupPlanTemplateRequestPrivate;

class QTAWSBACKUP_EXPORT ExportBackupPlanTemplateRequest : public BackupRequest {

public:
    ExportBackupPlanTemplateRequest(const ExportBackupPlanTemplateRequest &other);
    ExportBackupPlanTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExportBackupPlanTemplateRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
