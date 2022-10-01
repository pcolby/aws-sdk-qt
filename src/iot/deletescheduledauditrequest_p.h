// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCHEDULEDAUDITREQUEST_P_H
#define QTAWS_DELETESCHEDULEDAUDITREQUEST_P_H

#include "iotrequest_p.h"
#include "deletescheduledauditrequest.h"

namespace QtAws {
namespace IoT {

class DeleteScheduledAuditRequest;

class DeleteScheduledAuditRequestPrivate : public IoTRequestPrivate {

public:
    DeleteScheduledAuditRequestPrivate(const IoTRequest::Action action,
                                   DeleteScheduledAuditRequest * const q);
    DeleteScheduledAuditRequestPrivate(const DeleteScheduledAuditRequestPrivate &other,
                                   DeleteScheduledAuditRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteScheduledAuditRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
