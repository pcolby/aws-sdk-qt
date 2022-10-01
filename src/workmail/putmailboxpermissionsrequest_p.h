// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMAILBOXPERMISSIONSREQUEST_P_H
#define QTAWS_PUTMAILBOXPERMISSIONSREQUEST_P_H

#include "workmailrequest_p.h"
#include "putmailboxpermissionsrequest.h"

namespace QtAws {
namespace WorkMail {

class PutMailboxPermissionsRequest;

class PutMailboxPermissionsRequestPrivate : public WorkMailRequestPrivate {

public:
    PutMailboxPermissionsRequestPrivate(const WorkMailRequest::Action action,
                                   PutMailboxPermissionsRequest * const q);
    PutMailboxPermissionsRequestPrivate(const PutMailboxPermissionsRequestPrivate &other,
                                   PutMailboxPermissionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutMailboxPermissionsRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
