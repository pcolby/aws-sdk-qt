// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBACKUPSELECTIONREQUEST_H
#define QTAWS_CREATEBACKUPSELECTIONREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class CreateBackupSelectionRequestPrivate;

class QTAWSBACKUP_EXPORT CreateBackupSelectionRequest : public BackupRequest {

public:
    CreateBackupSelectionRequest(const CreateBackupSelectionRequest &other);
    CreateBackupSelectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBackupSelectionRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
