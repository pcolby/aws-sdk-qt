// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUDITMITIGATIONACTIONSTASKREQUEST_P_H
#define QTAWS_DESCRIBEAUDITMITIGATIONACTIONSTASKREQUEST_P_H

#include "iotrequest_p.h"
#include "describeauditmitigationactionstaskrequest.h"

namespace QtAws {
namespace IoT {

class DescribeAuditMitigationActionsTaskRequest;

class DescribeAuditMitigationActionsTaskRequestPrivate : public IoTRequestPrivate {

public:
    DescribeAuditMitigationActionsTaskRequestPrivate(const IoTRequest::Action action,
                                   DescribeAuditMitigationActionsTaskRequest * const q);
    DescribeAuditMitigationActionsTaskRequestPrivate(const DescribeAuditMitigationActionsTaskRequestPrivate &other,
                                   DescribeAuditMitigationActionsTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAuditMitigationActionsTaskRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
