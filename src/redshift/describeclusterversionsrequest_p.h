// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERVERSIONSREQUEST_P_H
#define QTAWS_DESCRIBECLUSTERVERSIONSREQUEST_P_H

#include "redshiftrequest_p.h"
#include "describeclusterversionsrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeClusterVersionsRequest;

class DescribeClusterVersionsRequestPrivate : public RedshiftRequestPrivate {

public:
    DescribeClusterVersionsRequestPrivate(const RedshiftRequest::Action action,
                                   DescribeClusterVersionsRequest * const q);
    DescribeClusterVersionsRequestPrivate(const DescribeClusterVersionsRequestPrivate &other,
                                   DescribeClusterVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeClusterVersionsRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
