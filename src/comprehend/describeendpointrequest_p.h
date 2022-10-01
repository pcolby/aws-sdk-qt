// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENDPOINTREQUEST_P_H
#define QTAWS_DESCRIBEENDPOINTREQUEST_P_H

#include "comprehendrequest_p.h"
#include "describeendpointrequest.h"

namespace QtAws {
namespace Comprehend {

class DescribeEndpointRequest;

class DescribeEndpointRequestPrivate : public ComprehendRequestPrivate {

public:
    DescribeEndpointRequestPrivate(const ComprehendRequest::Action action,
                                   DescribeEndpointRequest * const q);
    DescribeEndpointRequestPrivate(const DescribeEndpointRequestPrivate &other,
                                   DescribeEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEndpointRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
