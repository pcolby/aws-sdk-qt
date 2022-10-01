// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTROLREQUEST_P_H
#define QTAWS_CREATECONTROLREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "createcontrolrequest.h"

namespace QtAws {
namespace AuditManager {

class CreateControlRequest;

class CreateControlRequestPrivate : public AuditManagerRequestPrivate {

public:
    CreateControlRequestPrivate(const AuditManagerRequest::Action action,
                                   CreateControlRequest * const q);
    CreateControlRequestPrivate(const CreateControlRequestPrivate &other,
                                   CreateControlRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateControlRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
