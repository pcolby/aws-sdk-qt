// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTSTATUSREQUEST_P_H
#define QTAWS_GETACCOUNTSTATUSREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "getaccountstatusrequest.h"

namespace QtAws {
namespace AuditManager {

class GetAccountStatusRequest;

class GetAccountStatusRequestPrivate : public AuditManagerRequestPrivate {

public:
    GetAccountStatusRequestPrivate(const AuditManagerRequest::Action action,
                                   GetAccountStatusRequest * const q);
    GetAccountStatusRequestPrivate(const GetAccountStatusRequestPrivate &other,
                                   GetAccountStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAccountStatusRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
