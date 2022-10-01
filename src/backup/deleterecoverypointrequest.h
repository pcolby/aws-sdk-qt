// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECOVERYPOINTREQUEST_H
#define QTAWS_DELETERECOVERYPOINTREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class DeleteRecoveryPointRequestPrivate;

class QTAWSBACKUP_EXPORT DeleteRecoveryPointRequest : public BackupRequest {

public:
    DeleteRecoveryPointRequest(const DeleteRecoveryPointRequest &other);
    DeleteRecoveryPointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRecoveryPointRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
