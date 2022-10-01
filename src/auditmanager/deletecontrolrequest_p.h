// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTROLREQUEST_P_H
#define QTAWS_DELETECONTROLREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "deletecontrolrequest.h"

namespace QtAws {
namespace AuditManager {

class DeleteControlRequest;

class DeleteControlRequestPrivate : public AuditManagerRequestPrivate {

public:
    DeleteControlRequestPrivate(const AuditManagerRequest::Action action,
                                   DeleteControlRequest * const q);
    DeleteControlRequestPrivate(const DeleteControlRequestPrivate &other,
                                   DeleteControlRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteControlRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
