// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKUPPLANFROMJSONREQUEST_H
#define QTAWS_GETBACKUPPLANFROMJSONREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class GetBackupPlanFromJSONRequestPrivate;

class QTAWSBACKUP_EXPORT GetBackupPlanFromJSONRequest : public BackupRequest {

public:
    GetBackupPlanFromJSONRequest(const GetBackupPlanFromJSONRequest &other);
    GetBackupPlanFromJSONRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBackupPlanFromJSONRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
