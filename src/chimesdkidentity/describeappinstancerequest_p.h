// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPINSTANCEREQUEST_P_H
#define QTAWS_DESCRIBEAPPINSTANCEREQUEST_P_H

#include "chimesdkidentityrequest_p.h"
#include "describeappinstancerequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class DescribeAppInstanceRequest;

class DescribeAppInstanceRequestPrivate : public ChimeSdkIdentityRequestPrivate {

public:
    DescribeAppInstanceRequestPrivate(const ChimeSdkIdentityRequest::Action action,
                                   DescribeAppInstanceRequest * const q);
    DescribeAppInstanceRequestPrivate(const DescribeAppInstanceRequestPrivate &other,
                                   DescribeAppInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAppInstanceRequest)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
