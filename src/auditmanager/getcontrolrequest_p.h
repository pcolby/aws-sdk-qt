// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTROLREQUEST_P_H
#define QTAWS_GETCONTROLREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "getcontrolrequest.h"

namespace QtAws {
namespace AuditManager {

class GetControlRequest;

class GetControlRequestPrivate : public AuditManagerRequestPrivate {

public:
    GetControlRequestPrivate(const AuditManagerRequest::Action action,
                                   GetControlRequest * const q);
    GetControlRequestPrivate(const GetControlRequestPrivate &other,
                                   GetControlRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetControlRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
