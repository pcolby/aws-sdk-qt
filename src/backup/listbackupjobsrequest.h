// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBACKUPJOBSREQUEST_H
#define QTAWS_LISTBACKUPJOBSREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class ListBackupJobsRequestPrivate;

class QTAWSBACKUP_EXPORT ListBackupJobsRequest : public BackupRequest {

public:
    ListBackupJobsRequest(const ListBackupJobsRequest &other);
    ListBackupJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBackupJobsRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
