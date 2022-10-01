// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUDITSUPPRESSIONREQUEST_P_H
#define QTAWS_DESCRIBEAUDITSUPPRESSIONREQUEST_P_H

#include "iotrequest_p.h"
#include "describeauditsuppressionrequest.h"

namespace QtAws {
namespace IoT {

class DescribeAuditSuppressionRequest;

class DescribeAuditSuppressionRequestPrivate : public IoTRequestPrivate {

public:
    DescribeAuditSuppressionRequestPrivate(const IoTRequest::Action action,
                                   DescribeAuditSuppressionRequest * const q);
    DescribeAuditSuppressionRequestPrivate(const DescribeAuditSuppressionRequestPrivate &other,
                                   DescribeAuditSuppressionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAuditSuppressionRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
