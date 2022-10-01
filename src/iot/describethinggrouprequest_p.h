// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETHINGGROUPREQUEST_P_H
#define QTAWS_DESCRIBETHINGGROUPREQUEST_P_H

#include "iotrequest_p.h"
#include "describethinggrouprequest.h"

namespace QtAws {
namespace IoT {

class DescribeThingGroupRequest;

class DescribeThingGroupRequestPrivate : public IoTRequestPrivate {

public:
    DescribeThingGroupRequestPrivate(const IoTRequest::Action action,
                                   DescribeThingGroupRequest * const q);
    DescribeThingGroupRequestPrivate(const DescribeThingGroupRequestPrivate &other,
                                   DescribeThingGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeThingGroupRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
