// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERECOVERYPOINTLIFECYCLEREQUEST_P_H
#define QTAWS_UPDATERECOVERYPOINTLIFECYCLEREQUEST_P_H

#include "backuprequest_p.h"
#include "updaterecoverypointlifecyclerequest.h"

namespace QtAws {
namespace Backup {

class UpdateRecoveryPointLifecycleRequest;

class UpdateRecoveryPointLifecycleRequestPrivate : public BackupRequestPrivate {

public:
    UpdateRecoveryPointLifecycleRequestPrivate(const BackupRequest::Action action,
                                   UpdateRecoveryPointLifecycleRequest * const q);
    UpdateRecoveryPointLifecycleRequestPrivate(const UpdateRecoveryPointLifecycleRequestPrivate &other,
                                   UpdateRecoveryPointLifecycleRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRecoveryPointLifecycleRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
