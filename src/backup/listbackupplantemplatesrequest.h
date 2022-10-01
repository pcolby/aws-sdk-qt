// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBACKUPPLANTEMPLATESREQUEST_H
#define QTAWS_LISTBACKUPPLANTEMPLATESREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class ListBackupPlanTemplatesRequestPrivate;

class QTAWSBACKUP_EXPORT ListBackupPlanTemplatesRequest : public BackupRequest {

public:
    ListBackupPlanTemplatesRequest(const ListBackupPlanTemplatesRequest &other);
    ListBackupPlanTemplatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBackupPlanTemplatesRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
