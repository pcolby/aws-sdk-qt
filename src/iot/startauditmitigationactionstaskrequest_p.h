// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTAUDITMITIGATIONACTIONSTASKREQUEST_P_H
#define QTAWS_STARTAUDITMITIGATIONACTIONSTASKREQUEST_P_H

#include "iotrequest_p.h"
#include "startauditmitigationactionstaskrequest.h"

namespace QtAws {
namespace IoT {

class StartAuditMitigationActionsTaskRequest;

class StartAuditMitigationActionsTaskRequestPrivate : public IoTRequestPrivate {

public:
    StartAuditMitigationActionsTaskRequestPrivate(const IoTRequest::Action action,
                                   StartAuditMitigationActionsTaskRequest * const q);
    StartAuditMitigationActionsTaskRequestPrivate(const StartAuditMitigationActionsTaskRequestPrivate &other,
                                   StartAuditMitigationActionsTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartAuditMitigationActionsTaskRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
