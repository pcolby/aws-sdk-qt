// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPINSTANCEUSERREQUEST_P_H
#define QTAWS_DESCRIBEAPPINSTANCEUSERREQUEST_P_H

#include "chimesdkidentityrequest_p.h"
#include "describeappinstanceuserrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class DescribeAppInstanceUserRequest;

class DescribeAppInstanceUserRequestPrivate : public ChimeSdkIdentityRequestPrivate {

public:
    DescribeAppInstanceUserRequestPrivate(const ChimeSdkIdentityRequest::Action action,
                                   DescribeAppInstanceUserRequest * const q);
    DescribeAppInstanceUserRequestPrivate(const DescribeAppInstanceUserRequestPrivate &other,
                                   DescribeAppInstanceUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAppInstanceUserRequest)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
