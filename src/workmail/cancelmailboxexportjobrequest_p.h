// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELMAILBOXEXPORTJOBREQUEST_P_H
#define QTAWS_CANCELMAILBOXEXPORTJOBREQUEST_P_H

#include "workmailrequest_p.h"
#include "cancelmailboxexportjobrequest.h"

namespace QtAws {
namespace WorkMail {

class CancelMailboxExportJobRequest;

class CancelMailboxExportJobRequestPrivate : public WorkMailRequestPrivate {

public:
    CancelMailboxExportJobRequestPrivate(const WorkMailRequest::Action action,
                                   CancelMailboxExportJobRequest * const q);
    CancelMailboxExportJobRequestPrivate(const CancelMailboxExportJobRequestPrivate &other,
                                   CancelMailboxExportJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelMailboxExportJobRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
