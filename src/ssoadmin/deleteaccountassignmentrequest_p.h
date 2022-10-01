// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCOUNTASSIGNMENTREQUEST_P_H
#define QTAWS_DELETEACCOUNTASSIGNMENTREQUEST_P_H

#include "ssoadminrequest_p.h"
#include "deleteaccountassignmentrequest.h"

namespace QtAws {
namespace SsoAdmin {

class DeleteAccountAssignmentRequest;

class DeleteAccountAssignmentRequestPrivate : public SsoAdminRequestPrivate {

public:
    DeleteAccountAssignmentRequestPrivate(const SsoAdminRequest::Action action,
                                   DeleteAccountAssignmentRequest * const q);
    DeleteAccountAssignmentRequestPrivate(const DeleteAccountAssignmentRequestPrivate &other,
                                   DeleteAccountAssignmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAccountAssignmentRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
