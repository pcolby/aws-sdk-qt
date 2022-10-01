// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMAILBOXEXPORTJOBREQUEST_P_H
#define QTAWS_STARTMAILBOXEXPORTJOBREQUEST_P_H

#include "workmailrequest_p.h"
#include "startmailboxexportjobrequest.h"

namespace QtAws {
namespace WorkMail {

class StartMailboxExportJobRequest;

class StartMailboxExportJobRequestPrivate : public WorkMailRequestPrivate {

public:
    StartMailboxExportJobRequestPrivate(const WorkMailRequest::Action action,
                                   StartMailboxExportJobRequest * const q);
    StartMailboxExportJobRequestPrivate(const StartMailboxExportJobRequestPrivate &other,
                                   StartMailboxExportJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartMailboxExportJobRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
