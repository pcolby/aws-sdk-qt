// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESCHEDULEDAUDITREQUEST_P_H
#define QTAWS_CREATESCHEDULEDAUDITREQUEST_P_H

#include "iotrequest_p.h"
#include "createscheduledauditrequest.h"

namespace QtAws {
namespace IoT {

class CreateScheduledAuditRequest;

class CreateScheduledAuditRequestPrivate : public IoTRequestPrivate {

public:
    CreateScheduledAuditRequestPrivate(const IoTRequest::Action action,
                                   CreateScheduledAuditRequest * const q);
    CreateScheduledAuditRequestPrivate(const CreateScheduledAuditRequestPrivate &other,
                                   CreateScheduledAuditRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateScheduledAuditRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
