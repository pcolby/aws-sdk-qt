// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKUPSELECTIONREQUEST_H
#define QTAWS_DELETEBACKUPSELECTIONREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class DeleteBackupSelectionRequestPrivate;

class QTAWSBACKUP_EXPORT DeleteBackupSelectionRequest : public BackupRequest {

public:
    DeleteBackupSelectionRequest(const DeleteBackupSelectionRequest &other);
    DeleteBackupSelectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBackupSelectionRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
