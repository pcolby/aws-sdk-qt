// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESTOREJOBSREQUEST_P_H
#define QTAWS_LISTRESTOREJOBSREQUEST_P_H

#include "backuprequest_p.h"
#include "listrestorejobsrequest.h"

namespace QtAws {
namespace Backup {

class ListRestoreJobsRequest;

class ListRestoreJobsRequestPrivate : public BackupRequestPrivate {

public:
    ListRestoreJobsRequestPrivate(const BackupRequest::Action action,
                                   ListRestoreJobsRequest * const q);
    ListRestoreJobsRequestPrivate(const ListRestoreJobsRequestPrivate &other,
                                   ListRestoreJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRestoreJobsRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
