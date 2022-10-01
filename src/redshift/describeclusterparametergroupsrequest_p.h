// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERPARAMETERGROUPSREQUEST_P_H
#define QTAWS_DESCRIBECLUSTERPARAMETERGROUPSREQUEST_P_H

#include "redshiftrequest_p.h"
#include "describeclusterparametergroupsrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeClusterParameterGroupsRequest;

class DescribeClusterParameterGroupsRequestPrivate : public RedshiftRequestPrivate {

public:
    DescribeClusterParameterGroupsRequestPrivate(const RedshiftRequest::Action action,
                                   DescribeClusterParameterGroupsRequest * const q);
    DescribeClusterParameterGroupsRequestPrivate(const DescribeClusterParameterGroupsRequestPrivate &other,
                                   DescribeClusterParameterGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeClusterParameterGroupsRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
