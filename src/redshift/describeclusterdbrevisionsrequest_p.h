// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERDBREVISIONSREQUEST_P_H
#define QTAWS_DESCRIBECLUSTERDBREVISIONSREQUEST_P_H

#include "redshiftrequest_p.h"
#include "describeclusterdbrevisionsrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeClusterDbRevisionsRequest;

class DescribeClusterDbRevisionsRequestPrivate : public RedshiftRequestPrivate {

public:
    DescribeClusterDbRevisionsRequestPrivate(const RedshiftRequest::Action action,
                                   DescribeClusterDbRevisionsRequest * const q);
    DescribeClusterDbRevisionsRequestPrivate(const DescribeClusterDbRevisionsRequestPrivate &other,
                                   DescribeClusterDbRevisionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeClusterDbRevisionsRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
