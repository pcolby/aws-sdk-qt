// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCOUNTASSIGNMENTREQUEST_P_H
#define QTAWS_CREATEACCOUNTASSIGNMENTREQUEST_P_H

#include "ssoadminrequest_p.h"
#include "createaccountassignmentrequest.h"

namespace QtAws {
namespace SsoAdmin {

class CreateAccountAssignmentRequest;

class CreateAccountAssignmentRequestPrivate : public SsoAdminRequestPrivate {

public:
    CreateAccountAssignmentRequestPrivate(const SsoAdminRequest::Action action,
                                   CreateAccountAssignmentRequest * const q);
    CreateAccountAssignmentRequestPrivate(const CreateAccountAssignmentRequestPrivate &other,
                                   CreateAccountAssignmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAccountAssignmentRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
