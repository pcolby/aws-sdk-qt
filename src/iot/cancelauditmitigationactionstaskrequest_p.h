// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELAUDITMITIGATIONACTIONSTASKREQUEST_P_H
#define QTAWS_CANCELAUDITMITIGATIONACTIONSTASKREQUEST_P_H

#include "iotrequest_p.h"
#include "cancelauditmitigationactionstaskrequest.h"

namespace QtAws {
namespace IoT {

class CancelAuditMitigationActionsTaskRequest;

class CancelAuditMitigationActionsTaskRequestPrivate : public IoTRequestPrivate {

public:
    CancelAuditMitigationActionsTaskRequestPrivate(const IoTRequest::Action action,
                                   CancelAuditMitigationActionsTaskRequest * const q);
    CancelAuditMitigationActionsTaskRequestPrivate(const CancelAuditMitigationActionsTaskRequestPrivate &other,
                                   CancelAuditMitigationActionsTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelAuditMitigationActionsTaskRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
