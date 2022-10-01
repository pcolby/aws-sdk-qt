// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTRESTOREJOBREQUEST_P_H
#define QTAWS_STARTRESTOREJOBREQUEST_P_H

#include "backuprequest_p.h"
#include "startrestorejobrequest.h"

namespace QtAws {
namespace Backup {

class StartRestoreJobRequest;

class StartRestoreJobRequestPrivate : public BackupRequestPrivate {

public:
    StartRestoreJobRequestPrivate(const BackupRequest::Action action,
                                   StartRestoreJobRequest * const q);
    StartRestoreJobRequestPrivate(const StartRestoreJobRequestPrivate &other,
                                   StartRestoreJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartRestoreJobRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
