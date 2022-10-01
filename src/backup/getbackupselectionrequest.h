// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKUPSELECTIONREQUEST_H
#define QTAWS_GETBACKUPSELECTIONREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class GetBackupSelectionRequestPrivate;

class QTAWSBACKUP_EXPORT GetBackupSelectionRequest : public BackupRequest {

public:
    GetBackupSelectionRequest(const GetBackupSelectionRequest &other);
    GetBackupSelectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBackupSelectionRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
