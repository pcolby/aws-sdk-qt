// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESCHEDULEDAUDITREQUEST_P_H
#define QTAWS_UPDATESCHEDULEDAUDITREQUEST_P_H

#include "iotrequest_p.h"
#include "updatescheduledauditrequest.h"

namespace QtAws {
namespace IoT {

class UpdateScheduledAuditRequest;

class UpdateScheduledAuditRequestPrivate : public IoTRequestPrivate {

public:
    UpdateScheduledAuditRequestPrivate(const IoTRequest::Action action,
                                   UpdateScheduledAuditRequest * const q);
    UpdateScheduledAuditRequestPrivate(const UpdateScheduledAuditRequestPrivate &other,
                                   UpdateScheduledAuditRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateScheduledAuditRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
