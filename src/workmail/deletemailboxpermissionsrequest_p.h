// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMAILBOXPERMISSIONSREQUEST_P_H
#define QTAWS_DELETEMAILBOXPERMISSIONSREQUEST_P_H

#include "workmailrequest_p.h"
#include "deletemailboxpermissionsrequest.h"

namespace QtAws {
namespace WorkMail {

class DeleteMailboxPermissionsRequest;

class DeleteMailboxPermissionsRequestPrivate : public WorkMailRequestPrivate {

public:
    DeleteMailboxPermissionsRequestPrivate(const WorkMailRequest::Action action,
                                   DeleteMailboxPermissionsRequest * const q);
    DeleteMailboxPermissionsRequestPrivate(const DeleteMailboxPermissionsRequestPrivate &other,
                                   DeleteMailboxPermissionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteMailboxPermissionsRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
