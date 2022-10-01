// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCHEDULEDAUDITREQUEST_P_H
#define QTAWS_DESCRIBESCHEDULEDAUDITREQUEST_P_H

#include "iotrequest_p.h"
#include "describescheduledauditrequest.h"

namespace QtAws {
namespace IoT {

class DescribeScheduledAuditRequest;

class DescribeScheduledAuditRequestPrivate : public IoTRequestPrivate {

public:
    DescribeScheduledAuditRequestPrivate(const IoTRequest::Action action,
                                   DescribeScheduledAuditRequest * const q);
    DescribeScheduledAuditRequestPrivate(const DescribeScheduledAuditRequestPrivate &other,
                                   DescribeScheduledAuditRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeScheduledAuditRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
