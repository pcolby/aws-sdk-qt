// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTROLREQUEST_P_H
#define QTAWS_UPDATECONTROLREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "updatecontrolrequest.h"

namespace QtAws {
namespace AuditManager {

class UpdateControlRequest;

class UpdateControlRequestPrivate : public AuditManagerRequestPrivate {

public:
    UpdateControlRequestPrivate(const AuditManagerRequest::Action action,
                                   UpdateControlRequest * const q);
    UpdateControlRequestPrivate(const UpdateControlRequestPrivate &other,
                                   UpdateControlRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateControlRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
