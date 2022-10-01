// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOPYJOBSREQUEST_P_H
#define QTAWS_LISTCOPYJOBSREQUEST_P_H

#include "backuprequest_p.h"
#include "listcopyjobsrequest.h"

namespace QtAws {
namespace Backup {

class ListCopyJobsRequest;

class ListCopyJobsRequestPrivate : public BackupRequestPrivate {

public:
    ListCopyJobsRequestPrivate(const BackupRequest::Action action,
                                   ListCopyJobsRequest * const q);
    ListCopyJobsRequestPrivate(const ListCopyJobsRequestPrivate &other,
                                   ListCopyJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCopyJobsRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
