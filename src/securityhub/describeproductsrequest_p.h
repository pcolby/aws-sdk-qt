// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPRODUCTSREQUEST_P_H
#define QTAWS_DESCRIBEPRODUCTSREQUEST_P_H

#include "securityhubrequest_p.h"
#include "describeproductsrequest.h"

namespace QtAws {
namespace SecurityHub {

class DescribeProductsRequest;

class DescribeProductsRequestPrivate : public SecurityHubRequestPrivate {

public:
    DescribeProductsRequestPrivate(const SecurityHubRequest::Action action,
                                   DescribeProductsRequest * const q);
    DescribeProductsRequestPrivate(const DescribeProductsRequestPrivate &other,
                                   DescribeProductsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeProductsRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
