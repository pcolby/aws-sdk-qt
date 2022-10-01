// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBACKUPPLANREQUEST_H
#define QTAWS_UPDATEBACKUPPLANREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class UpdateBackupPlanRequestPrivate;

class QTAWSBACKUP_EXPORT UpdateBackupPlanRequest : public BackupRequest {

public:
    UpdateBackupPlanRequest(const UpdateBackupPlanRequest &other);
    UpdateBackupPlanRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBackupPlanRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
