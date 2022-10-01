// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUDITFINDINGREQUEST_P_H
#define QTAWS_DESCRIBEAUDITFINDINGREQUEST_P_H

#include "iotrequest_p.h"
#include "describeauditfindingrequest.h"

namespace QtAws {
namespace IoT {

class DescribeAuditFindingRequest;

class DescribeAuditFindingRequestPrivate : public IoTRequestPrivate {

public:
    DescribeAuditFindingRequestPrivate(const IoTRequest::Action action,
                                   DescribeAuditFindingRequest * const q);
    DescribeAuditFindingRequestPrivate(const DescribeAuditFindingRequestPrivate &other,
                                   DescribeAuditFindingRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAuditFindingRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
