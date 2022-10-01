// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENDPOINTREQUEST_P_H
#define QTAWS_DESCRIBEENDPOINTREQUEST_P_H

#include "iotrequest_p.h"
#include "describeendpointrequest.h"

namespace QtAws {
namespace IoT {

class DescribeEndpointRequest;

class DescribeEndpointRequestPrivate : public IoTRequestPrivate {

public:
    DescribeEndpointRequestPrivate(const IoTRequest::Action action,
                                   DescribeEndpointRequest * const q);
    DescribeEndpointRequestPrivate(const DescribeEndpointRequestPrivate &other,
                                   DescribeEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEndpointRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
