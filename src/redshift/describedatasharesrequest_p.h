// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASHARESREQUEST_P_H
#define QTAWS_DESCRIBEDATASHARESREQUEST_P_H

#include "redshiftrequest_p.h"
#include "describedatasharesrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeDataSharesRequest;

class DescribeDataSharesRequestPrivate : public RedshiftRequestPrivate {

public:
    DescribeDataSharesRequestPrivate(const RedshiftRequest::Action action,
                                   DescribeDataSharesRequest * const q);
    DescribeDataSharesRequestPrivate(const DescribeDataSharesRequestPrivate &other,
                                   DescribeDataSharesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDataSharesRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
