// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCESSPOINTSREQUEST_P_H
#define QTAWS_DESCRIBEACCESSPOINTSREQUEST_P_H

#include "efsrequest_p.h"
#include "describeaccesspointsrequest.h"

namespace QtAws {
namespace Efs {

class DescribeAccessPointsRequest;

class DescribeAccessPointsRequestPrivate : public EfsRequestPrivate {

public:
    DescribeAccessPointsRequestPrivate(const EfsRequest::Action action,
                                   DescribeAccessPointsRequest * const q);
    DescribeAccessPointsRequestPrivate(const DescribeAccessPointsRequestPrivate &other,
                                   DescribeAccessPointsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAccessPointsRequest)

};

} // namespace Efs
} // namespace QtAws

#endif
