// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICESINSCOPEREQUEST_P_H
#define QTAWS_GETSERVICESINSCOPEREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "getservicesinscoperequest.h"

namespace QtAws {
namespace AuditManager {

class GetServicesInScopeRequest;

class GetServicesInScopeRequestPrivate : public AuditManagerRequestPrivate {

public:
    GetServicesInScopeRequestPrivate(const AuditManagerRequest::Action action,
                                   GetServicesInScopeRequest * const q);
    GetServicesInScopeRequestPrivate(const GetServicesInScopeRequestPrivate &other,
                                   GetServicesInScopeRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetServicesInScopeRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
