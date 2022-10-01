// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBACKUPPLANSREQUEST_H
#define QTAWS_LISTBACKUPPLANSREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class ListBackupPlansRequestPrivate;

class QTAWSBACKUP_EXPORT ListBackupPlansRequest : public BackupRequest {

public:
    ListBackupPlansRequest(const ListBackupPlansRequest &other);
    ListBackupPlansRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBackupPlansRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
