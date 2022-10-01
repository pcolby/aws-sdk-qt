// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPBACKUPJOBREQUEST_H
#define QTAWS_STOPBACKUPJOBREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class StopBackupJobRequestPrivate;

class QTAWSBACKUP_EXPORT StopBackupJobRequest : public BackupRequest {

public:
    StopBackupJobRequest(const StopBackupJobRequest &other);
    StopBackupJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopBackupJobRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
