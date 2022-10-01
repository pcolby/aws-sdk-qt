// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCOPYJOBREQUEST_P_H
#define QTAWS_STARTCOPYJOBREQUEST_P_H

#include "backuprequest_p.h"
#include "startcopyjobrequest.h"

namespace QtAws {
namespace Backup {

class StartCopyJobRequest;

class StartCopyJobRequestPrivate : public BackupRequestPrivate {

public:
    StartCopyJobRequestPrivate(const BackupRequest::Action action,
                                   StartCopyJobRequest * const q);
    StartCopyJobRequestPrivate(const StartCopyJobRequestPrivate &other,
                                   StartCopyJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartCopyJobRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
