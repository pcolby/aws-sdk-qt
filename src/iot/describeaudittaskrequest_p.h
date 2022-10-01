// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUDITTASKREQUEST_P_H
#define QTAWS_DESCRIBEAUDITTASKREQUEST_P_H

#include "iotrequest_p.h"
#include "describeaudittaskrequest.h"

namespace QtAws {
namespace IoT {

class DescribeAuditTaskRequest;

class DescribeAuditTaskRequestPrivate : public IoTRequestPrivate {

public:
    DescribeAuditTaskRequestPrivate(const IoTRequest::Action action,
                                   DescribeAuditTaskRequest * const q);
    DescribeAuditTaskRequestPrivate(const DescribeAuditTaskRequestPrivate &other,
                                   DescribeAuditTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAuditTaskRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
