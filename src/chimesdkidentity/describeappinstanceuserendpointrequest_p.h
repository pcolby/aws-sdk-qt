// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPINSTANCEUSERENDPOINTREQUEST_P_H
#define QTAWS_DESCRIBEAPPINSTANCEUSERENDPOINTREQUEST_P_H

#include "chimesdkidentityrequest_p.h"
#include "describeappinstanceuserendpointrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class DescribeAppInstanceUserEndpointRequest;

class DescribeAppInstanceUserEndpointRequestPrivate : public ChimeSdkIdentityRequestPrivate {

public:
    DescribeAppInstanceUserEndpointRequestPrivate(const ChimeSdkIdentityRequest::Action action,
                                   DescribeAppInstanceUserEndpointRequest * const q);
    DescribeAppInstanceUserEndpointRequestPrivate(const DescribeAppInstanceUserEndpointRequestPrivate &other,
                                   DescribeAppInstanceUserEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAppInstanceUserEndpointRequest)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
