// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDELEGATIONSREQUEST_P_H
#define QTAWS_GETDELEGATIONSREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "getdelegationsrequest.h"

namespace QtAws {
namespace AuditManager {

class GetDelegationsRequest;

class GetDelegationsRequestPrivate : public AuditManagerRequestPrivate {

public:
    GetDelegationsRequestPrivate(const AuditManagerRequest::Action action,
                                   GetDelegationsRequest * const q);
    GetDelegationsRequestPrivate(const GetDelegationsRequestPrivate &other,
                                   GetDelegationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDelegationsRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
