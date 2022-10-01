// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBCLUSTERSREQUEST_P_H
#define QTAWS_DESCRIBEDBCLUSTERSREQUEST_P_H

#include "neptunerequest_p.h"
#include "describedbclustersrequest.h"

namespace QtAws {
namespace Neptune {

class DescribeDBClustersRequest;

class DescribeDBClustersRequestPrivate : public NeptuneRequestPrivate {

public:
    DescribeDBClustersRequestPrivate(const NeptuneRequest::Action action,
                                   DescribeDBClustersRequest * const q);
    DescribeDBClustersRequestPrivate(const DescribeDBClustersRequestPrivate &other,
                                   DescribeDBClustersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDBClustersRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
