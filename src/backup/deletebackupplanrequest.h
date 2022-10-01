// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKUPPLANREQUEST_H
#define QTAWS_DELETEBACKUPPLANREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class DeleteBackupPlanRequestPrivate;

class QTAWSBACKUP_EXPORT DeleteBackupPlanRequest : public BackupRequest {

public:
    DeleteBackupPlanRequest(const DeleteBackupPlanRequest &other);
    DeleteBackupPlanRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBackupPlanRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
