// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMAILBOXEXPORTJOBSREQUEST_P_H
#define QTAWS_LISTMAILBOXEXPORTJOBSREQUEST_P_H

#include "workmailrequest_p.h"
#include "listmailboxexportjobsrequest.h"

namespace QtAws {
namespace WorkMail {

class ListMailboxExportJobsRequest;

class ListMailboxExportJobsRequestPrivate : public WorkMailRequestPrivate {

public:
    ListMailboxExportJobsRequestPrivate(const WorkMailRequest::Action action,
                                   ListMailboxExportJobsRequest * const q);
    ListMailboxExportJobsRequestPrivate(const ListMailboxExportJobsRequestPrivate &other,
                                   ListMailboxExportJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListMailboxExportJobsRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
