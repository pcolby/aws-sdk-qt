// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERACCOUNTREQUEST_P_H
#define QTAWS_DEREGISTERACCOUNTREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "deregisteraccountrequest.h"

namespace QtAws {
namespace AuditManager {

class DeregisterAccountRequest;

class DeregisterAccountRequestPrivate : public AuditManagerRequestPrivate {

public:
    DeregisterAccountRequestPrivate(const AuditManagerRequest::Action action,
                                   DeregisterAccountRequest * const q);
    DeregisterAccountRequestPrivate(const DeregisterAccountRequestPrivate &other,
                                   DeregisterAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeregisterAccountRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
