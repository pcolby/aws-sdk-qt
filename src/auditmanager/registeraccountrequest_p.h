// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERACCOUNTREQUEST_P_H
#define QTAWS_REGISTERACCOUNTREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "registeraccountrequest.h"

namespace QtAws {
namespace AuditManager {

class RegisterAccountRequest;

class RegisterAccountRequestPrivate : public AuditManagerRequestPrivate {

public:
    RegisterAccountRequestPrivate(const AuditManagerRequest::Action action,
                                   RegisterAccountRequest * const q);
    RegisterAccountRequestPrivate(const RegisterAccountRequestPrivate &other,
                                   RegisterAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterAccountRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
