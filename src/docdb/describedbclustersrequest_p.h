// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBCLUSTERSREQUEST_P_H
#define QTAWS_DESCRIBEDBCLUSTERSREQUEST_P_H

#include "docdbrequest_p.h"
#include "describedbclustersrequest.h"

namespace QtAws {
namespace DocDb {

class DescribeDBClustersRequest;

class DescribeDBClustersRequestPrivate : public DocDbRequestPrivate {

public:
    DescribeDBClustersRequestPrivate(const DocDbRequest::Action action,
                                   DescribeDBClustersRequest * const q);
    DescribeDBClustersRequestPrivate(const DescribeDBClustersRequestPrivate &other,
                                   DescribeDBClustersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDBClustersRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
