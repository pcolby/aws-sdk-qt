// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMAILBOXQUOTAREQUEST_P_H
#define QTAWS_UPDATEMAILBOXQUOTAREQUEST_P_H

#include "workmailrequest_p.h"
#include "updatemailboxquotarequest.h"

namespace QtAws {
namespace WorkMail {

class UpdateMailboxQuotaRequest;

class UpdateMailboxQuotaRequestPrivate : public WorkMailRequestPrivate {

public:
    UpdateMailboxQuotaRequestPrivate(const WorkMailRequest::Action action,
                                   UpdateMailboxQuotaRequest * const q);
    UpdateMailboxQuotaRequestPrivate(const UpdateMailboxQuotaRequestPrivate &other,
                                   UpdateMailboxQuotaRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateMailboxQuotaRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
