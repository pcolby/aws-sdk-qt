// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBACKUPSELECTIONSREQUEST_H
#define QTAWS_LISTBACKUPSELECTIONSREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class ListBackupSelectionsRequestPrivate;

class QTAWSBACKUP_EXPORT ListBackupSelectionsRequest : public BackupRequest {

public:
    ListBackupSelectionsRequest(const ListBackupSelectionsRequest &other);
    ListBackupSelectionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBackupSelectionsRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
