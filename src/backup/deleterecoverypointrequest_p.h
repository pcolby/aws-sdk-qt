// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECOVERYPOINTREQUEST_P_H
#define QTAWS_DELETERECOVERYPOINTREQUEST_P_H

#include "backuprequest_p.h"
#include "deleterecoverypointrequest.h"

namespace QtAws {
namespace Backup {

class DeleteRecoveryPointRequest;

class DeleteRecoveryPointRequestPrivate : public BackupRequestPrivate {

public:
    DeleteRecoveryPointRequestPrivate(const BackupRequest::Action action,
                                   DeleteRecoveryPointRequest * const q);
    DeleteRecoveryPointRequestPrivate(const DeleteRecoveryPointRequestPrivate &other,
                                   DeleteRecoveryPointRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRecoveryPointRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
