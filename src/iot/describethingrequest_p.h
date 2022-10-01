// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETHINGREQUEST_P_H
#define QTAWS_DESCRIBETHINGREQUEST_P_H

#include "iotrequest_p.h"
#include "describethingrequest.h"

namespace QtAws {
namespace IoT {

class DescribeThingRequest;

class DescribeThingRequestPrivate : public IoTRequestPrivate {

public:
    DescribeThingRequestPrivate(const IoTRequest::Action action,
                                   DescribeThingRequest * const q);
    DescribeThingRequestPrivate(const DescribeThingRequestPrivate &other,
                                   DescribeThingRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeThingRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
