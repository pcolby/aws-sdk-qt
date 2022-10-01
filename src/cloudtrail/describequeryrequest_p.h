// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEQUERYREQUEST_P_H
#define QTAWS_DESCRIBEQUERYREQUEST_P_H

#include "cloudtrailrequest_p.h"
#include "describequeryrequest.h"

namespace QtAws {
namespace CloudTrail {

class DescribeQueryRequest;

class DescribeQueryRequestPrivate : public CloudTrailRequestPrivate {

public:
    DescribeQueryRequestPrivate(const CloudTrailRequest::Action action,
                                   DescribeQueryRequest * const q);
    DescribeQueryRequestPrivate(const DescribeQueryRequestPrivate &other,
                                   DescribeQueryRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeQueryRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
