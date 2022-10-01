// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPINSTANCEADMINREQUEST_P_H
#define QTAWS_DESCRIBEAPPINSTANCEADMINREQUEST_P_H

#include "chimesdkidentityrequest_p.h"
#include "describeappinstanceadminrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class DescribeAppInstanceAdminRequest;

class DescribeAppInstanceAdminRequestPrivate : public ChimeSdkIdentityRequestPrivate {

public:
    DescribeAppInstanceAdminRequestPrivate(const ChimeSdkIdentityRequest::Action action,
                                   DescribeAppInstanceAdminRequest * const q);
    DescribeAppInstanceAdminRequestPrivate(const DescribeAppInstanceAdminRequestPrivate &other,
                                   DescribeAppInstanceAdminRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAppInstanceAdminRequest)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
