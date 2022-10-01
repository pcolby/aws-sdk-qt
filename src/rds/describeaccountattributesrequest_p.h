// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTATTRIBUTESREQUEST_P_H
#define QTAWS_DESCRIBEACCOUNTATTRIBUTESREQUEST_P_H

#include "rdsrequest_p.h"
#include "describeaccountattributesrequest.h"

namespace QtAws {
namespace Rds {

class DescribeAccountAttributesRequest;

class DescribeAccountAttributesRequestPrivate : public RdsRequestPrivate {

public:
    DescribeAccountAttributesRequestPrivate(const RdsRequest::Action action,
                                   DescribeAccountAttributesRequest * const q);
    DescribeAccountAttributesRequestPrivate(const DescribeAccountAttributesRequestPrivate &other,
                                   DescribeAccountAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAccountAttributesRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
