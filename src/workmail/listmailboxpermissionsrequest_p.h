// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMAILBOXPERMISSIONSREQUEST_P_H
#define QTAWS_LISTMAILBOXPERMISSIONSREQUEST_P_H

#include "workmailrequest_p.h"
#include "listmailboxpermissionsrequest.h"

namespace QtAws {
namespace WorkMail {

class ListMailboxPermissionsRequest;

class ListMailboxPermissionsRequestPrivate : public WorkMailRequestPrivate {

public:
    ListMailboxPermissionsRequestPrivate(const WorkMailRequest::Action action,
                                   ListMailboxPermissionsRequest * const q);
    ListMailboxPermissionsRequestPrivate(const ListMailboxPermissionsRequestPrivate &other,
                                   ListMailboxPermissionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListMailboxPermissionsRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
