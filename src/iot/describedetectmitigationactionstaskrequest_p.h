// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDETECTMITIGATIONACTIONSTASKREQUEST_P_H
#define QTAWS_DESCRIBEDETECTMITIGATIONACTIONSTASKREQUEST_P_H

#include "iotrequest_p.h"
#include "describedetectmitigationactionstaskrequest.h"

namespace QtAws {
namespace IoT {

class DescribeDetectMitigationActionsTaskRequest;

class DescribeDetectMitigationActionsTaskRequestPrivate : public IoTRequestPrivate {

public:
    DescribeDetectMitigationActionsTaskRequestPrivate(const IoTRequest::Action action,
                                   DescribeDetectMitigationActionsTaskRequest * const q);
    DescribeDetectMitigationActionsTaskRequestPrivate(const DescribeDetectMitigationActionsTaskRequestPrivate &other,
                                   DescribeDetectMitigationActionsTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDetectMitigationActionsTaskRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
