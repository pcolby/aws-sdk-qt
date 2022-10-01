// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBACKUPPLANVERSIONSREQUEST_H
#define QTAWS_LISTBACKUPPLANVERSIONSREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class ListBackupPlanVersionsRequestPrivate;

class QTAWSBACKUP_EXPORT ListBackupPlanVersionsRequest : public BackupRequest {

public:
    ListBackupPlanVersionsRequest(const ListBackupPlanVersionsRequest &other);
    ListBackupPlanVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBackupPlanVersionsRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
