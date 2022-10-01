// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBACKUPVAULTSREQUEST_H
#define QTAWS_LISTBACKUPVAULTSREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class ListBackupVaultsRequestPrivate;

class QTAWSBACKUP_EXPORT ListBackupVaultsRequest : public BackupRequest {

public:
    ListBackupVaultsRequest(const ListBackupVaultsRequest &other);
    ListBackupVaultsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBackupVaultsRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
