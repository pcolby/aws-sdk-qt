// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTBACKUPJOBREQUEST_H
#define QTAWS_STARTBACKUPJOBREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class StartBackupJobRequestPrivate;

class QTAWSBACKUP_EXPORT StartBackupJobRequest : public BackupRequest {

public:
    StartBackupJobRequest(const StartBackupJobRequest &other);
    StartBackupJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartBackupJobRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
