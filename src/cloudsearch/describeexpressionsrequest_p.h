// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXPRESSIONSREQUEST_P_H
#define QTAWS_DESCRIBEEXPRESSIONSREQUEST_P_H

#include "cloudsearchrequest_p.h"
#include "describeexpressionsrequest.h"

namespace QtAws {
namespace CloudSearch {

class DescribeExpressionsRequest;

class DescribeExpressionsRequestPrivate : public CloudSearchRequestPrivate {

public:
    DescribeExpressionsRequestPrivate(const CloudSearchRequest::Action action,
                                   DescribeExpressionsRequest * const q);
    DescribeExpressionsRequestPrivate(const DescribeExpressionsRequestPrivate &other,
                                   DescribeExpressionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeExpressionsRequest)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
